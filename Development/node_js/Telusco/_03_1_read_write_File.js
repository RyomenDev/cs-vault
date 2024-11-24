 
var fs = require('fs')

fs.readFile('_02_2_modules.js','utf8',function(err,data)//file_name , encoding , callback function
{ 
    console.log(data);
})

fs.writeFile('_03_2_write.js','console.log("done")',function(err){
    console.log("Data Saved");
})
// write erase all data and write new content

fs.appendFile('_03_2_write.js','console.log("done")',function(err){
    console.log("Data Saved");
})

fs.unlink('_03_2_write.js',function(err){
    console.log("deleted");
})
// to delete a file