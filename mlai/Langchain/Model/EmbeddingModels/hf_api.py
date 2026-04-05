from langchain_huggingface import HuggingFaceEmbeddings
from dotenv import load_dotenv

load_dotenv()

embedding = HuggingFaceEmbeddings(model="intfloat/e5-base-v2") ## api
# embedding = HuggingFaceEmbeddings(model_name="NeuML/pubmedbert-base-embeddings") ## for local download

result = embedding.embed_query("fuch off")

print(result)