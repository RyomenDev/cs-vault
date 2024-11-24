const fs=require('fs');


// fs.writeFile('_07_file_1.txt','today is awesome day!',function(err){
//     if(err) throw err;
//     console.log('saved!');
// });
fs.writeFile('_07_file_1.txt','today is awesome day!',()=>{
    console.log('saved!');
});

fs.appendFile('_07_file_1.txt','\nhow are u?',()=>{
    console.log("task completed1");
})

fs.readFile('_07_file_1.txt','UTF-8',(err,data)=>{
    // data=data.toString();
    console.log(data);
})
// fs.readFile('_07_file_1.txt','UTF-8',(err,data)=>{
//     console.log(data);
// })


