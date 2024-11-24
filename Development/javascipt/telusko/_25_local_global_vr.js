let user='ben'  // global var

function greet(u) {   // local var
        let num=4;  // local var
        console.log(u,num);
}

greet(user)

function add(num1,num2,num3=7) { // default value only if value not passed
    return num1+num2+num3
}

let res=add(5,6,9)
console.log(res);