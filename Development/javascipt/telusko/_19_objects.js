
// object literal
let alien1 = {}

console.log(typeof alien1);

let alien2 ={
    name: 'ben',
    tech:'JS',
    'one more':'yes',
}

console.log(alien2);
console.log(alien2.name);
console.log(alien2['tech']);
// console.log(alien2.one more);
console.log(alien2['one more']);


let input = 'name' // by input
console.log(alien2[input]);