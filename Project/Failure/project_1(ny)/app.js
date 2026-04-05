let apikey = "sk-YOUR_KEY_HERE";

document.getElementById('input_icon').addEventListener('click', () => {
    if (document.getElementById('input').value !== '') {
        document.getElementsByClassName('search')[0].style.boxShadow = '5px 5px 10px rgb(0,0,0,0.5),inset 5px 5px 10px rgb(0,0,0,0.5)';
        document.getElementsByClassName('loading')[0].style.display = 'flex';
        document.getElementsByClassName('loading')[0].innerHTML = `
            <div class="load">
                <h6></h6>
                <h6></h6>
                <h6></h6>
            </div>`;
        document.getElementById('input_icon').style.cursor = 'not-allowed';
        runMessage(document.getElementById('input').value);
    } else {
        document.getElementsByClassName('search')[0].style.boxShadow = '5px 5px 10px rgb(0,0,0,0.5),inset 5px 5px 10px rgb(255,0,0,0.5)';
    }
});

let offButton = () => {
    Array.from(document.getElementsByClassName('button')).forEach((el) => {
        el.classList.remove('lan');
    });
};

Array.from(document.getElementsByClassName('button')).forEach((el) => {
    el.addEventListener('click', () => {
        console.log('Button clicked:', el.innerText);
        offButton();
        el.classList.add('lan');
    });
});

let runMessage = (message) => {
    let lan = document.querySelector('.lan').innerText;
    fetch('https://api.openai.com/v1/completions', {
        method: 'POST',
        headers: {
            'Content-Type': 'application/json',
            'Authorization': 'Bearer ' + apikey
        },
        body: JSON.stringify({
            model: 'gpt-3.5-turbo-instruct',
            prompt: message + ' in ' + lan,
            temperature: 0.5,
            max_tokens: 3000
        })
    })
    .then(response => {
        if (!response.ok) {
            throw new Error(`Network response was not ok, status: ${response.status}`);
        }
        return response.json();
    })
    .then(result => {
        console.log('Response from API:', result);
        if (result && result.choices && result.choices.length > 0) {
            console.log('Generated text:', result.choices[0]['text']);
            messageBox(message, result.choices[0]['text']);
        } else {
            console.error('Invalid response format');
            document.querySelector('.loading').innerHTML = 'not found';
        }
    })
    .catch(error => {
        console.error('Error:', error);
        document.querySelector('.loading').innerHTML = 'not found';
    })
    .finally(() => {
        document.querySelector('.loading').style.display = 'none';
        document.getElementById('input').value = '';
        document.getElementById('input_icon').style.cursor = 'pointer';
    });
};

let messageBox = function (msg, res) {
    let myMessageBox = document.createElement('pre');
    myMessageBox.classList.add('qus_bx');
    let myMessage = document.createElement('p');
    myMessage.innerText = msg;
    myMessageBox.append(myMessage);
    document.getElementById('history').append(myMessageBox);
};
