from langchain_huggingface import ChatHuggingFace,HuggingFaceEndpoint
from dotenv import load_dotenv
load_dotenv()
from langchain_core.prompts import PromptTemplate,load_prompt

llm = HuggingFaceEndpoint(repo_id='Qwen/Qwen3-Next-80B-A3B-Thinking',task='text-generation')

model = ChatHuggingFace(llm=llm)

prompt_template = load_prompt("template.json")

print("ready to get roasted")
name = input("enter name -->  ")
speciality = input("enter speciality -->  ")

prompt = prompt_template.invoke({   
    'name':name,
    'speciality':speciality
})

result = model.invoke(prompt)

print(result.content)