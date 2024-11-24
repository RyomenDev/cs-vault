
const fs = require("fs");

//Sync -- run step by step
const data1 = fs.readFileSync('_07_file_1.txt','UTF-8');
console.log(data1);

console.log('after the data');
 
console.log("--------------------------------------")

//Asyn -- can be shown later
fs.readFile('_07_file_1.txt','UTF-8',(err,data)=>{ // error else data
    console.log(data);
})

console.log('after the data');