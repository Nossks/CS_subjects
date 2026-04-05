const user={
    name:"aryan",
    mob_no:12345,
    function (){
        return `${this.name},yeah buddy` 
    }
}
user.name="nayra"
console.log(user.function())

let func=(num1,num2 )=>{
    return  num1+num2;
}
console.log(func(44,77));

let divide=(n1,n2)=>(n1/n2)
console.log(divide(6,2));


//object return 
let object=()=>({user});
console.log(object());
//   console.log(object().function());  error