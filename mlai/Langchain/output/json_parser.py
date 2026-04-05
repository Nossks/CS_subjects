from langchain_huggingface import ChatHuggingFace,HuggingFaceEndpoint
from langchain_core.prompts import PromptTemplate
from langchain_core.output_parsers import JsonOutputParser
from dotenv import load_dotenv
load_dotenv()

llm = HuggingFaceEndpoint(repo_id="moonshotai/Kimi-K2-Instruct-0905")
model = ChatHuggingFace(llm=llm)

parser = JsonOutputParser() ##no schema enforce

template = PromptTemplate(
    template="list 2 jokes in hinenglish \n {format_instruction}",
    partial_variables={'format_instruction':parser.get_format_instructions()}
)

chain = template | model | parser

result = chain.invoke({})

print(result)