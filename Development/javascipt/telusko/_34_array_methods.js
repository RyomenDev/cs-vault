
let data=[1,2,3,4,5,6];

console.log(data.push(5));// add value to last 
console.log(data.pop());// removes last value
// console.log(data.pop());
console.log(data.shift());// removes first value
console.log(data.unshift(7));//add value to first
console.log(data);

console.log(data.splice(2,3,));// slice the array(from,how many)
console.log(data);
console.log(data.splice(2,1,11,15));//add 11,15
console.log(data);