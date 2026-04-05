const score=new Number(300000000000);
let str=score.toString();
console.log(typeof(str));
console.log(score.toFixed(3));
console.log(score.toPrecision(4));
console.log(score.toLocaleString("en-IN"));

console.log(Math.max(22,66,77,-11));
console.log(Math.ceil(66.566));
//console.log(Math.random()); //between 0 and 1

console.log(Math.floor(Math.random()*6)+1); //between 1 to 6

const min = 10;
const max = 20;
console.log(Math.floor(Math.random()*(max-min+1))+min);
