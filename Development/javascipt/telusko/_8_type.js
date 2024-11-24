// type conversion and type coercion
let num=6
console.log(typeof num)

let x = String(6)
console.log(typeof x) 

y=7 +""
console.log(y,typeof y) 
y=y+2  // concatinate 
console.log(y,typeof y)
y=+y+2  //uniary operator -->> adds
console.log(y,typeof y)
y=y-1
console.log(y,typeof y) //6 number

y=7 +"a"  // concatinating
console.log(y,typeof y) 
y=y-1
console.log(y,typeof y) // NaN number

z=3
z=!z
console.log(z,typeof z)

/*
boolean false ---->
0 -0 0n "" '' 
null undefined NaN document.all 
*/

let x1=parseInt("123 ben")  // try to convert in num only when num is on start
console.log(x1,typeof x1)




