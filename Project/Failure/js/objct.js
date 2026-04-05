const fun=(num)=>{
    return num*5;
}
fun.power=0;
console.log(fun.power);

//prot0
function result(score,name){
    this.name=name;
    this.score=score;
}
result.prototype.increment=function(){
    this.score++;
}
o1= new result(32,"aryan");
o1.increment();
console.log(o1);