

const bioData={
    name: "ben",
    age:10,
    deg: "actor",
    work:{
        f1:"adventure",
        f2:"fun"
    }
}

console.log(`my name is ${bioData.name}`);
 
// console.log(`age is ${age}`);//error

// let {name,age,deg}=bioData; // inorder 
let {name,deg,age,work}=bioData; // inorder 
/* let name,age,deg;
({name,deg,age}=bioData);// should be inorder*/
console.log(`age is ${age}`);


// RENAMING
let {name:myname,deg:deg1,age:age1}=bioData; // inorder 
console.log(`deg is ${deg1}`);

console.log(`work is ${work.f1}`);

