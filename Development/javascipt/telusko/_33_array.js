
let values = [5,4,'a','b',{tech:'js'},function(){console.log('hello!!');}];

values.push(3.5);
values[1]=6;

console.log(values);
console.log(values[2]);
values[5]();
// values[5]; //not work