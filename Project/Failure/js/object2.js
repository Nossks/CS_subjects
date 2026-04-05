const meta=new Object();
meta["email"]="gairolaaryn@gmial.com"
meta.fb={
    username:"aryan"
}
meta.insta={
    username:"arru"
}

//console.log(meta);


obj1={
    id:3,
    uname:"dd"
}
obj2={
    no:33,
   
}
//let hold=Object.assign({},obj1,obj2);
let hold={...obj1,...obj2};


//console.log(hold);

console.log(Object.keys(hold))
console.log(Object.values(hold))

console.log(hold.hasOwnProperty("noy"))

//destructure
const {uname:nam}=hold;
console.log(nam)