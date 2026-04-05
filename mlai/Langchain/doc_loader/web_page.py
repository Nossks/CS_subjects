from langchain_community.document_loaders import WebBaseLoader

loader = WebBaseLoader(web_path="https://python.langchain.com/docs/integrations/document_loaders/web_base/")


for doc in loader.lazy_load():
    print(doc)
