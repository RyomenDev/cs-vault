
const arr = [1,2,3];
console.log(arr);

const arrObj={
    0:1,
    1:2,
    2:3,
}
console.log(arrObj);
console.log(typeof(Array.isArray(arr))); // boolean
console.log((Array.isArray(arr))); // true
console.log((Array.isArray(arrObj))); // false