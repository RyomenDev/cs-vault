
const fun1=()=>{
    setTimeout(() => {
        console.log('fun1'); 
        fun2();
    }, 3000);//3 sec
}

const fun2=()=>{
        console.log('fun2');
}

fun1();
// fun2();

const p1 = (per1,per2) =>{
    console.log(`hi ${per1}`);
    per2();
}

const p2 = () =>{
    console.log(`got you!!`);
}

// p1("ben");
p1("ben",p2)
// p2();