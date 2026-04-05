from langchain.text_splitter import RecursiveCharacterTextSplitter
from langchain_community.document_loaders import PyPDFLoader

splitter = RecursiveCharacterTextSplitter(
    chunk_size=10,
    chunk_overlap=5
)

loader = PyPDFLoader(
    file_path=r'D:\mlai\Langchain\doc_loader\aryan_gairola.pdf'
)

doc = loader.load()

# print(doc[0].page_content)

text = splitter.split_documents(doc)

print(text)