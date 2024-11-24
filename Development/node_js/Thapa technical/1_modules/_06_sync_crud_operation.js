

const fs=require('fs')

// fs.mkdirSync('thapa ch1')



fs.writeFileSync('thapa ch/_06_file_11.txt','hello');

//empty file
fs.open('thapa ch/_06_file_2.txt', 'w', function (err, file) {
    if (err) throw err;
    console.log('Saved!');
  });

// fs.appendFile('thapa ch/_06_file_1.txt', '\n Hello content!', function (err) {
//     if (err) throw err;
//     console.log('Saved!');
// });
fs.appendFileSync('thapa ch/_06_file_11.txt', '\n Hello content!');

data = fs.readFileSync('thapa ch/_06_file_11.txt')
data=data.toString()
console.log(data);

data = fs.readFileSync('thapa ch/_06_file_1.txt')
console.log(data);
data = fs.readFileSync('thapa ch/_06_file_2.txt')
console.log(data);

fs.unlink('thapa ch/_06_file_2.txt', function (err) {
    if (err) throw err;
    console.log('File deleted!');
});
