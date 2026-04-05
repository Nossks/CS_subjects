document.addEventListener('DOMContentLoaded',function(){
    const textinput = document.getElementById('text-input');
    const speakbtn = document.getElementById('speak-btn');
    const listenbtn = document.getElementById('listen-btn');
    const textoutput = document.getElementById('text-output');
    const langselect = document.getElementById('language-select');
    speakbtn.addEventListener('click',()=>{
        const text = textinput.value;
        const language = langselect.value;
        if (text !=='') {
            const utterance = new SpeechSynthesisUtterance(text);
            utterance.lang = language;
            speechSynthesis.speak(utterance);
        }
    });
    listenbtn.addEventListener("click",()=>{
        const language = langselect.value;
        const recognition = new (window.SpeechRecognition || windocw.webkitSpeechRecognition)();
        recognition.lang = language;
        recognition.interimResults = false;
        recognition.maxAlternatives = 1;
        recognition.start();
        recognition.onresult = (event) => {
            const speechResult = event.results[0][0].transcript;
            textoutput.value = speechResult;
        };
        recognition.onspeechend =()=>{
            recognition.stop();
        };
        recognition.onerror =(event) =>{
            console.error('Speech recognition error detected: ' +event.error);
        };
    });
});
