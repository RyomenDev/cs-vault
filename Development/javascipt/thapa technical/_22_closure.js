let c=5;

const outerfun=(a)=>{
    let b=10;
    const innerfun=()=>{
        let sum = a+b+7+c;
        console.log(sum);
    }
    // console.log("b="+b);
    // innerfun();
    return innerfun;
}

var a=3;
let a1 = outerfun(a);
// console.log(a1);
// console.dir(a1);
a1();
