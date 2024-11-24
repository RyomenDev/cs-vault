
let a=5
let b=a

console.log(a,b);

b=a+7
console.log(a,b);



const obj1={
    user:"user1",
    pass:"pass1",
}
const obj2=obj1;
console.log(obj1);
console.log(obj2);

obj2.user="change user";
console.log(obj1);
console.log(obj2);

const arr1=[1,2,3];
const arr2=arr1;
const arr3=[].concat(arr1);// copying
console.log(arr1,arr2,arr3);

// arr2=[5,8,6]; not work
arr2.push(5);
arr3.push(9);

console.log(arr1,arr2,arr3);

// let c=7;
// let *d=&c;

// console.log(c,d);