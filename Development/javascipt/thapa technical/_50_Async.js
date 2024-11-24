// synchronous -- one by one
// Async -- together -- async request doesnt block the client -- browser is responsive


const fun2=()=>{
    setTimeout(() => { //Async
        console.log('fun2 is starting');
    }, 3000); // in ms
}

const fun1=()=>{
    console.log('fun1 is starting');
    fun2();
    console.log('fun1 is ending');
}

fun1();