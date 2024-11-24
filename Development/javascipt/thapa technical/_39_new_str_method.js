
// method in template strings
let name1="watson";
const names1=`${name1}  `;
console.log(`${name1}`.startsWith('W'));
console.log(`${name1}`.startsWith('w'));
console.log(`${name1}`.endsWith('q'));
console.log(`${name1}`.includes('son'));

console.log(`${name1} `.repeat(3));

console.log(names1.repeat(3));