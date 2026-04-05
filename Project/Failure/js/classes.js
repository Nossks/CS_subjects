class User{
    constructor(username,age){
        this.username=username;
        this.age=age;
    }
    show(){
        console.log(`My name is ${this.username} and age is ${this.age}`)
    }
}
const u1=new User("aryan",18);
u1.show()