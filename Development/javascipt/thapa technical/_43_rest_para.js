
//ES5
function sum1(a,b) {
    console.log(a+b);
}
sum1(2,4,1,3);

//ES6
function sum2(...input) {
    console.log(input);
    console.log(...input);
    let total=0;
    for (const i of input) {
        total+=i;
    }
    console.log(total);
    console.log(input.indexOf(1));
}
sum2(2,4,1,3);