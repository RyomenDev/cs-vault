
// default parameter

// function mult1(a,b) {
//     b=(typeof b!=='undefined')?b:1;
//     console.log(a,b);
//     console.log(a*b+"\n");
// }
// mult1(4);
// mult1(4,3);

// function mult2(a,b=1) { // default argument
//     console.log(a,b);
//     console.log(a*b+"\n");
// }
// mult2(4);

const mult3 = (a,b=1)=> { // default argument
    console.log(a,b);
    console.log(a*b+"\n");
}
mult3(4);
