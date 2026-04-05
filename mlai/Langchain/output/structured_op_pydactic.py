from langchain_google_genai import ChatGoogleGenerativeAI
from dotenv import load_dotenv
load_dotenv()
from pydantic import BaseModel,Field
from typing import Optional

class op(BaseModel):
    sarcasm : str = Field(default="normal",description="find out the sarcasm in the joke")
    age : Optional[int] = Field(default=None,description="try to judge the age of user based on its joke if possible and i insist to do predict it",gt=0,lt=60)
    
model = ChatGoogleGenerativeAI(model="gemini-2.5-flash",temperature=0.9)

structured_model = model.with_structured_output(op)

joke = """
    when a man sleep with different women he is called playboy ,player etc,but when women does the
    she is called your mom.
"""

result = structured_model.invoke(joke)

result_dict = dict(result)
print(result_dict)