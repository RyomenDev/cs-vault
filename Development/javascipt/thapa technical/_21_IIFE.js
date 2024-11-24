
// immediately invoked function expression [IIFE]

(function () { // anonymous funxtion enclosed within grouping operator
    var name = "a"
    console.log("author name "+name);
})();

(function (name) {
    // var name = "a"
    console.log("author name "+name);
})('a');//immediately invoked functon - ()

