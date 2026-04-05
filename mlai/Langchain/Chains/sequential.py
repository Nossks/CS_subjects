from langchain_huggingface import ChatHuggingFace,HuggingFaceEndpoint
from langchain_core.output_parsers import JsonOutputParser
from langchain_core.prompts import PromptTemplate
from dotenv import load_dotenv
load_dotenv()

llm = HuggingFaceEndpoint(repo_id="meta-llama/Llama-3.1-8B-Instruct")
model = ChatHuggingFace(llm=llm)

parser = JsonOutputParser()

template1 = PromptTemplate(
    template="create a fictional story of a person with name {name} from {place} in 5 sentences \n {format_instruction}",
    input_variables=["name","place"],
    partial_variables={"format_instruction":parser.get_format_instructions()}
)

template2 = PromptTemplate(
    template="summarize this story {story} in 2 lines \n {format_instruction}",
    input_variables=["story"],
    partial_variables={"format_instruction":parser.get_format_instructions()}
)

chain = template1 | model | parser | template2 | model | parser

result = chain.invoke({
    "name":"aryan",
    "place":"uttarakhand"
})

print(result)