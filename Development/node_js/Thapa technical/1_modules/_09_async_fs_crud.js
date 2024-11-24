const fs = require('fs');

fs.mkdirSync('thapa ch2',(err)=>{
    console.log('folder created');
})

fs.writeFile('thapa ch2/bio.txt','hello',(err,data)=>{
    console.log('file created');
})
// fs.appendFile('thapa ch2/bio.txt','\nhow are you',(err)=>{ // error else data
//     console.log('data saved');
// })

// fs.readFile('thapa ch2/bio.txt','UTF-8',(err,data)=>{ // error else data
//     console.log(data);
// })

// fs.rename('thapa ch2/bio.txt','thapa ch2/mybio.txt',(err)=>{ // error else data
//     // console.log(data);
//     console.log('file renamed');
// })

// fs.unlink('thapa ch2/mybio.txt', function (err) {
//     if (err) throw err;
//      console.log('File deleted!');
// });

// fs.rmdir('thapa ch2',(err)=>{
//     if(err != null)
//         console.log(err);
//     console.log('folder deleted');
// })