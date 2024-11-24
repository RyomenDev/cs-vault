
let data=[];

data[0]=5;
data[99]=99;

// for (let i = 1; i < 98; i++) {
//     data.push(i);
// }

// for(let n of data){
//     console.log(n);
// }

for (const key in data) {
        console.log(key);
        console.log(data[key]);
}


// console.log(data);
// console.log(data.length);