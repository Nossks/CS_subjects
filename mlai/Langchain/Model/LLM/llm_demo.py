from langchain_google_genai import GoogleGenerativeAI
from dotenv import load_dotenv
import os

load_dotenv()

# google_api_key = os.getenv("GOOGLE_API_KEY")
llm = GoogleGenerativeAI(model="gemini-2.5-flash")

result = llm.invoke("what the fuck was that what is capital of this country")

print(result)

