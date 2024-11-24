
let a=1;  //number
let b="thapa" //string
let c=true; //boolean
let d;   //undefined
let e=" ";  //string
let f=1.52;  //number
let g = null;  //object

const yt={
    name:"ben",
    sybs:"956k"
}
yt.prof="fun";
console.log(yt);
console.log(typeof(yt)); // object
console.log(typeof({})); // object
console.log(typeof([])); // array-->object
console.log(typeof(function() {})); // function--> object

const check=()=>{
    console.log("checking");
}

check.letAddMore = " to check if it is object";
console.log(check.letAddMore);

// console.log(typeof(a));
// console.log(typeof(b));
// console.log(typeof(c));
// console.log(typeof(d));
// console.log(typeof(e)); 
// console.log(typeof(f)); 
// console.log(typeof(g)); 
