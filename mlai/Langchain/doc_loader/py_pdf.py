from langchain_community.document_loaders import PyPDFLoader
from langchain_huggingface import HuggingFaceEndpoint,ChatHuggingFace
from langchain.prompts import PromptTemplate
from dotenv import load_dotenv
load_dotenv()

loader = PyPDFLoader(file_path=r"doc_loader\invoice_merged.pdf")

# llm = HuggingFaceEndpoint(repo_id="deepseek-ai/DeepSeek-V3.1-Terminus")
# model = ChatHuggingFace(llm=llm)

prompt = PromptTemplate(
    template="roast this guy based on its resume {resume} in 5 lines",
    input_variables=["resume"]
)

docs = loader.load()

# chain = prompt | model 

# result = chain.invoke({
#     "resume" : docs[0].page_content
# })

print(len(docs))