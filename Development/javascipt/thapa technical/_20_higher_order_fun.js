
const question=(name)=>{
    if (name=='a') {
        // console.log("1a");
        return function (q1) {
            console.log(`hii ${name}.what is ${q1}?`);
            // console.log("1b");
        }
    }
    else if (name=='b') {
        return function (q2) {
            console.log(`hii ${name}.what is ${q2}?`);
        }
    }
    else if(name=='c') {
        return function (q3) {
            console.log(`hii ${name}.what is ${q3}?`);
        }
    }
    else{
        return function(){
            console.log("welcome");
        }
    }
}

question('a')("UI");
const cand2 = question("b");
cand2("web");
// console.log("end");