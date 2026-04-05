//literals
const sym=Symbol("terrorist");

const user={
    name:"Aryan"+" Gairola",
    age:18,
    [sym]:("not a terrorist"),
    "e-mail":"gairolaaryn@gmail.com"
}
//acess and symbol

console.log(user);
console.log(user["e-mail"]);
console.log(user.name);
console.log(user.age);

//freeze

// Object.freeze(user);
// user["name"]="arya";
// user["pswrd"]="43ty71";
// console.log(user);

//functions

// user.greeting=function(){
//     console.log("hey buddy");
// }
// user.grt2=function(){
//     console.log(`hey ${this.name} buddy`);
// }
// console.log(user.greeting());
// console.log(user.grt2());