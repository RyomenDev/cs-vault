// ES5
function sum1(a,b,c) {
    console.log(a+b+c);
}
sum1(2,4,1,3);

var arr1=[1,2,3,4,5];
console.log(arr1);
console.log(...arr1);
sum1.apply(null,arr1);


//ES6
var arr1=[1,2,3,4,5];
sum1(...arr1)

console.log('------------------------');

//replace concat
let arr2=[1,2,3];
let arr3=[4,5,6];
arr4=arr2.concat(arr3);
console.log(arr4); 

arr5=[...arr2,...arr3];
console.log(arr5);

// replace copy  
let arrc1=[1,2,3]; 
let arrc2=arrc1;
console.log(arrc2);
 
arrc2.push(4,5);
console.log(arrc1,arrc2);

let arrc3=[...arrc1,6,7]
console.log(arrc3,arrc1);
