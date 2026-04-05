class user{
    constructor(name,age){
        this.name=name;
        this.age=age;
    }
    showuser(){
        console.log(`my name is ${this.name} and i am ${this.age} yrs old`);
    }
}
class profession extends user{
    constructor(name,age,job){
        super(name,age);
        this.job=job;
    }
    showprofession(){
        console.log(`my name is ${this.name} and i am ${this.age} yrs old and i am a ${this.job}`);
    }
}
o1=new profession("aryan" ,18,"tech guy")
o2=new user("aryan",18)
// o1.showprofession()
// o1.showuser()
//o2.showprofession()
o2.showuser()