from langchain_huggingface import HuggingFaceEndpoint,ChatHuggingFace
from dotenv import load_dotenv

load_dotenv()

llm = HuggingFaceEndpoint(repo_id="Qwen/Qwen3-Next-80B-A3B-Thinking",task="text-generation")

model = ChatHuggingFace(llm=llm)

result = model.invoke("tell me a small joke?? ")

print(result.content)