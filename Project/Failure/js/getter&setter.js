class user{
    constructor(passy){
        //this.email=email;
        this.passy=passy;
    }
    set email(val){
        this._email=val;
    }
    get email(){
        return this._email.toLowerCase();
    }
}
const obj=new user("aryan@gmail.com","89768");
console.log(obj.email);