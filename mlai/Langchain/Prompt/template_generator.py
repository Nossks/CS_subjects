from langchain_core.prompts import PromptTemplate

template = PromptTemplate(
    template="""Please brutally roast this person name {name} and he/she thinks their speciality  is {speciality} but lets keep it short 1-2 lines and tight when i say tight i mean it brutally roast just go for it""",
    input_variables=['name','speciality'],
    validate_template=True
)

template.save("template.json")