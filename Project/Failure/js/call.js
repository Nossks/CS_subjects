function user(name,email){
    set.call(this,name);
    this.email=email;
}
function set(name){
    this.name=name;
}
u1=new user("arryan","gairolaaryn@gamil.com");
console.log(u1);