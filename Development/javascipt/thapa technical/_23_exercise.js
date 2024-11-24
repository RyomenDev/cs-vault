// CLOSURE

const question=(name)=>{
    return function (q1) {
        if (name=='a') {
            // console.log("1a");
            console.log(`hii ${name}.what is ${q1}?`);
            // console.log("1b");
        } 
        else if (name=='b') {
            console.log(`hii ${name}.what is ${q1}?`);
        }
        else if(name=='c') {
                console.log(`hii ${name}.what is ${q1}?`);
        }
        else{
                console.log("welcome");
            }
    }
}

question('a')("UI");
const cand2 = question("b");
cand2("web");
// console.log("end");