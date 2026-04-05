from langchain_huggingface import ChatHuggingFace,HuggingFaceEndpoint
from langchain_core.prompts import PromptTemplate
from langchain.output_parsers import StrOutputParser
from dotenv import load_dotenv
load_dotenv()

llm = HuggingFaceEndpoint(repo_id="Qwen/Qwen3-Next-80B-A3B-Thinking")
model = ChatHuggingFace(llm=llm)

template = PromptTemplate(
    template="give me 5 powerfull {X} figures",
    input_variables=['X']
)

parser = StrOutputParser()

chain = template | model | parser

result = chain.invoke({'X':'political'})

print(result)
