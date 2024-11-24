// "use strict"

console.log(this)// global object --> window object

function about() {
    var b=8;
    console.log(b);
    console.log(this);// global object --> window
}
// about();

//method in object
const abc = {
    name : "ben",
    qualif: "fun",
    sum1: function() {
        var add = 5+6;
        console.log(add);
        console.log(this); // refering abc object
        console.log(this.name); // ben
    },
    sum2: function() {
        var add = 5+6;
        console.log(add);
        console.log(this); // refering abc object
    }
}

// abc.sum1();
// abc.sum2();