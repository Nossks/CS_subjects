const voice_btn = document.querySelector("#voice-button");
const text_input = document.querySelector("#text-input");

voice_btn.addEventListener("click", (e) => {
    console.log("Voice button clicked");

    // Check for browser support
    const SpeechRecognition = window.SpeechRecognition || window.webkitSpeechRecognition;
    if (!SpeechRecognition) {
        alert("Speech Recognition not supported");
        return;
    }
    voice_btn.textContent = "on going..";
    console.log("Speech Recognition supported");

    let recognize= new SpeechRecognition();
    recognize.lang="en-US";
    recognize.maxAlternatives=1;

    recognize.addEventListener("result",(evnt)=>{
        let text_result=evnt.results[0][0].transcript;
        text_input.value=text_result;
    })

    recognize.addEventListener("end",(evnt)=>{
        voice_btn.textContent="🎤 Speak";
    })

    recognize.start();
});
