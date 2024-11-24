
function greet1(){
    console.log('hello world');
}

function greet2(){
    return 'hello! world'
}

function greet3(s){
    return 'hello! world '+ s
    // return `hello ${s}`
}
   
greet1()
let str=greet2()
console.log(str);

let user = 'ben ten';
let str1=greet3(user)
console.log(str1);