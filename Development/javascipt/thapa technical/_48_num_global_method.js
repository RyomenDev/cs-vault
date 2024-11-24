
let num=Infinity;//or NaN
let num2 = 0;
console.log(isFinite(num)); //false
console.log(isFinite(num2)); //true

console.log(Number.isFinite(num));//false
console.log(Number.isFinite(num2));//true

console.log('-----------');

let num3=Infinity;
console.log(isNaN(num3));//false

let num4='ban';
console.log(isNaN(num4));//true
console.log(Number.isNaN(num4));//false

console.log(Number.isInteger(num3)); //false