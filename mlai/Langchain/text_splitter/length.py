from langchain.text_splitter import CharacterTextSplitter

splitter = CharacterTextSplitter(
    chunk_size=10,
    chunk_overlap=0,
    separator=''
)

text = splitter.split_text('Hi how are you doing?')

print(text)