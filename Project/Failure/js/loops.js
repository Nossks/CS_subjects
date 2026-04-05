const arr=["aryan","gairola","and","devon","larrat"];

const obj={
    name:"aryan",
    age:"18",
    course:"btech"
}

const mp=new Map();
mp.set(1,"devon");
mp.set(2,"levan");
mp.set(3,"denis");

const str="ironman";

//for of looop
for (const i of arr) {
    //console.log(i);
}
for (const [key,value] of mp) {
    //console.log(`${key} is ${value}`);
}

//for in loop
for (const key in obj) {
    //console.log(key +" : "+obj[key]);
}

for(const i in str){
    //console.log(str[i]);
}

//for each loop

const mobile=[
    {
        Brand:"moto",
        price:16000
    },
    {
        Brand:"apple",
        price:150000
    },
    {
        Brand:"one+",
        price:75000
    }
]

// arr.forEach( function(item,index){
//     console.log(arr[index]);
// })

// arr.forEach((item,index)=>{
//     console.log(`at ${index} is ${item}`);
// })

mobile.forEach( (item,index)=>{
    console.log(item.Brand);
})