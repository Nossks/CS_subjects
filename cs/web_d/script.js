sub = document.querySelector("#submit")

sub.addEventListener("click",fun)

function fun(e){
    e.preventDefault()
    nam = document.querySelector("#name").value
    email = document.querySelector("#email").value

    gender = document.querySelector('input[name="Gender"]:checked')
    gender = gender ? gender.value : "prefer not say"

    cb_arr = document.querySelectorAll('input[name="hobbies"]:checked')
    hobbies_arr=[]
    for(let i of cb_arr){
        hobbies_arr.push(i.value)
    }

    dob = document.querySelector("#dob").value
    age = calculate_age(dob)

    // email verification using regx
    let pattern = /^[A-Za-z]+[0-9.%+-]*@gmail\.com$/;
    if(!pattern.test(email)){
        text = `hello ${nam} , 
        you are ${gender} , 
        your email is ${email} which is invalid 
        and you are ${age} years old`;

        // console.dir(text)
        
        document.querySelector("#result").textContent = text;
    }
    else{
        text = `hello ${nam} , 
        you are ${gender} , 
        your email is ${email} 
        and you are ${age} years old`;

        // console.dir(text)

        document.querySelector("#result").textContent = text;
    }
}

const calculate_age = (dob) =>{
    let birth_date = new Date(dob)
    let cur = new Date()
    
    return -1 * (birth_date.getFullYear() - cur.getFullYear());
}