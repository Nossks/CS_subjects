from langchain_huggingface import ChatHuggingFace,HuggingFaceEndpoint
from langchain_core.prompts import PromptTemplate
from langchain_core.output_parsers import JsonOutputParser
from langchain.schema.runnable import RunnableParallel
from dotenv import load_dotenv
load_dotenv()

llm1 = HuggingFaceEndpoint(repo_id="meta-llama/Llama-3.1-8B-Instruct")
llm2 = HuggingFaceEndpoint(repo_id="Qwen/Qwen3-Next-80B-A3B-Thinking")
model1 = ChatHuggingFace(llm=llm1)
model2 = ChatHuggingFace(llm=llm2)

parser = JsonOutputParser()

template1 = PromptTemplate(
    template="give 3 mightest fictional superhero as team A\n {format_instruction}",
    partial_variables={"format_instruction":parser.get_format_instructions()}
)
template2 = PromptTemplate(
    template="give 3 mightest fictionl superhero as team B\n {format_instruction}",
    partial_variables={"format_instruction":parser.get_format_instructions()}
)

template3 = PromptTemplate(
    template="who will win among {teamA} and {teamB} and why?\n {format_instruction}",
    input_variables=["teamA","teamB"],
    partial_variables={"format_instruction":parser.get_format_instructions()}
)

parallel_chain = RunnableParallel({
    "teamA" : template1 | model1 | parser,
    "teamB" : template2 | model2 | parser
})

merge_chain = template3 | model1 | parser

chain = parallel_chain | merge_chain

result = chain.invoke({})

print(result)