from langchain_huggingface import ChatHuggingFace,HuggingFaceEndpoint
from langchain_core.prompts import PromptTemplate
from langchain_core.output_parsers import PydanticOutputParser
from pydantic import BaseModel,Field
from dotenv import load_dotenv
load_dotenv()

llm = HuggingFaceEndpoint(repo_id="moonshotai/Kimi-K2-Instruct-0905")
model = ChatHuggingFace(llm=llm)

class Person(BaseModel):
    name : str = Field(description="what is the name of person")
    age : int = Field(gt=18,description="agee of the person")
    hobbies : list[str] = Field(description="3 hobbies of that person")

parser = PydanticOutputParser(pydantic_object=Person)

template = PromptTemplate(
    template="create a fictional person from {place} \n {format_instruction}",
    input_variables=["place"],
    partial_variables={'format_instruction':parser.get_format_instructions()}
)

chain = template | model | parser

result = chain.invoke({'pakistan'})

print(result)
print(template.invoke({'debugger-nagar'}))