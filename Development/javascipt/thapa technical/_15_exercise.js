"use strict"

let like=100;
const yt = {
    name:"name1",
    sub:"sub1",
}

console.log(like);
console.log(yt.sub);

const fun1 = (a,b) => {
    a=200;
    b.sub="sub change";
}

fun1(like,yt)

console.log(like);
console.log(yt.sub);