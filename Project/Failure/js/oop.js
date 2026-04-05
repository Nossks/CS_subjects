function user(name,age,address){
    this.name=name;
    this.age=age;
    this.address=address;
    return this;
}
const u1=new user("aryan",18,"falsuwa");
const u2= user("rolex",21,"falsuwa");
// console.log(u1);
// console.log(u2);
console.log(u1.constructor);
