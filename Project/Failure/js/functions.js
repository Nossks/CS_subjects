function adition(num1,num2){
    return num1+num2;
}
// console.log(adition("8",9));
// console.log(adition(8,"9"));
// console.log(adition(null,true))


function username(name="xyz"){
    if(name==="xyz"){
        return "fukoff"
    }
    return `${name} ,hi,how are you`
}

// console.log(username("aryan"))
// console.log(username())

function cart(...item){
    return item;
}
//console.log(cart(100,200,300));

function ary(arr){
    return arr[0]
}
// console.log(ary(
//     [18,8,8,8,2]
// ))

function obj(o1){
    console.log(o1);
}

// obj({
//     name:"aryan",
//     age:18
// })

//console.log(hld(6)) //erroe
let hld=function one(num){
    return num+1;
}
console.log(hld(6))