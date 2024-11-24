

// ECMASCRIPT 2015

var name1="a";
console.log(name1);
const name2="b";
console.log(name2);
let name3="c";
console.log(name3);

name1="ac";
console.log(name1);
// name2="bc";  // value cant be change of const
// console.log(name2);
name3="cc";
console.log(name3);

function fun1(par1)
 { // function scope
    var names1="p";
    let names2="q";
    const names3="r";
    if(par1){ // block scope
        var names4="t";
        let name="a";
        const sname="z";

        console.log("1-- name is "+name+" "+sname+" and "+names1+" "+names2+" "+names3+" "+names4);
    }
    // console.log("2-- name is "+name+" "+sname+" and "+names1+" "+names2+" "+names3+" "+names4); // not work
    console.log("2-- name is "+" "+" and "+names1+" "+names2+" "+names3+" "+names4);
}
fun1(1);