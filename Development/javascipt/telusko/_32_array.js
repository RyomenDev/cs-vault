
// array supports duplcate values.

let values1 = new Array();
let values2 = [5,7,8];

// values and values 2 both are array

console.log(values1);
console.log(values2);

values2.push(6);
console.log(values2);

console.log(values2.length);

console.log(values2[2]);// by index
console.log(values2[6]);// undefined
