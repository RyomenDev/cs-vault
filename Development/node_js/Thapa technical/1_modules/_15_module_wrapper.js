/*

Immediately invoked function expressin (IIFE)  (of js)
 -- self executiong anonymous function

*/
// private
(function (exports, require, module, __filename, __dirname) {
  var name = "ben";
  console.log(name);
//   console.log(__filename); //undefined 
})();

console.log(__filename);
var a="ten";
console.log(a);
// console.log(name);// not defined
