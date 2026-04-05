 let date=new Date();
console.log(date);
console.log(date.toString());
console.log(date.toLocaleString());
console.log(date.getFullYear())
console.log(date.getMonth())
console.log(date.toJSON())
console.log(date.toLocaleString("dafault",{
    era:"short"
}))


let time=date.getTime();
console.log(time);
console.log(time.toString());
console.log(Date.now());