
const abc = {
    name : "ben",
    qualif: "fun",
    sum1: function() {
        var add = 5+6;
        console.log(add);
        console.log(this); // refering abc object
        console.log(this.name); // ben
    
        function child() {
        var add = 10+6;
        console.log(add);
        console.log(this);
        console.log(this.add); // refering global object
        console.log("hello");
    }

    child();
}
}

abc.sum1();
