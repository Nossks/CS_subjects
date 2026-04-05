const name="Aryan Gairola";
const collage="    gehu   ";
console.log(`my name is ${name.toUpperCase()} and i study in ${collage.toUpperCase()}`);
//console.log(name.toUpperCase());
console.log(name.charAt(0));
let nam=name.substring(0,4);    //one less than upperbipund
console.log(nam);
console.log(collage.trim());
const url="gairola%20aryn@gmail.com";


let newurl=url.replace('%20','')
console.log(newurl);
console.log(newurl.includes('aryn'));

let exp=newurl.split('');
console.log(exp)
console.log(typeof(exp));//object
