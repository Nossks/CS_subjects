from langchain_huggingface import ChatHuggingFace,HuggingFaceEndpoint
from langchain_core.output_parsers import PydanticOutputParser
from langchain_core.prompts import PromptTemplate
from langchain_core.runnables import RunnableBranch,RunnableLambda
from pydantic import Field,BaseModel
from typing import Literal,Optional
from dotenv import load_dotenv
load_dotenv()

llm = HuggingFaceEndpoint(repo_id="Qwen/Qwen3-Next-80B-A3B-Thinking")
model = ChatHuggingFace(llm=llm)

class op(BaseModel):
    sentiment : Literal['positive','negative'] = Field(description="sentiment of the feedback")
    name : Optional[str] = Field(description="what is the name of the person")
    feedback : str = Field(description="original feedback given by user")

parser = PydanticOutputParser(pydantic_object=op)

prompt1 = PromptTemplate(
    template="distuinguish this feedback {feedback} \n{format_instruction}",
    input_variables=["feedback"],
    partial_variables={"format_instruction":parser.get_format_instructions()}
)

prompt2 = PromptTemplate(
    template="genrate appropriate respose to this {sentiment} feedback {feedback}",
    input_variables=["sentiment","feedback"]
)

classify = prompt1 | model | parser

# branch_chain = RunnableBranch(
#     (lambda x:x.sentiment == 'positive' , prompt2 | model ),
#     (lambda s:s.sentiment == 'negative' , prompt2 | model ),
#     RunnableLambda(lambda x:"could not find sentiment")
# )

branch_chain = RunnableBranch(
    (lambda x: x.sentiment == 'positive', RunnableLambda(lambda x: x.model_dump()) | prompt2 | model),  ##pydatic_obj to dict
    (lambda x: x.sentiment == 'negative', RunnableLambda(lambda x: x.model_dump()) | prompt2 | model),
    RunnableLambda(lambda x: "could not find sentiment")
)


chain = classify | branch_chain

result = chain.invoke({"feedback":"that phone was like cherry on top"})

print(result)