from langchain_community.document_loaders import TextLoader

loader = TextLoader(r'doc_loader\file.txt')

docs = loader.load()

print(docs)