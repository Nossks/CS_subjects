class user{
    user(username,age){
        this.username=username;
        this.age=age;
    }
    show(){
        console.log(`name is ${this.username} and age is ${this.age}`)
    }
}
u1=new user("aryan",17);
u1.show()