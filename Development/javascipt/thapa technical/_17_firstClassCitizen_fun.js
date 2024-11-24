
// -------------------- 1 ------------ function as variable
// const t1=function() {
//     console.log("thanku");
// }
const t1 = ()=>{
    console.log("thanku");
}
var a = function () {
    console.log("welcome");
}

// t1();
// a();

const t2={
    name:"ben",
    work:function () {
        console.log("cartoon");
    }
}

// t2.work();

// --------- 2 --------- function as argument
function t3(t) {
    // console.log(t,"t in t3");
    console.log(t(),"t() in t3");
    // t();
}

// t3(t1); // t1 as call back function

// ------------- 3 -------------------- return function
function t4() {
    return function t5() {
        console.log("fun t5 in t4");
    }
}

t4(); // nothing shown
t4()(); // t5 shown

const c = t4();
c();// t5 shown

// const d=t5();
// d();  error