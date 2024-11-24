var a="a";

function first() {
    var b="b";
    second();

    function second() {
        var c ="c";
        console.log(a+b+c);
        // console.log(a+b+c+d); // cant find d
    }
}
first();

function three() {
    var d ="d";
    console.log(a+d);
    // console.log(a+b+d); // not b
    // console.log(a+b+c+d);// cant find c , d
}
three(); 