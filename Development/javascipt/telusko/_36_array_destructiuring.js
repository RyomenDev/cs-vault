

let nums=[5,7,2,4]
console.log(nums);

// for (let index = 0; index < nums.length; index++) {
//     const element = nums[index];
//     console.log(element);
// }

// destructure
let [a,b,c,d]=nums;  // let [ a,b,,d]= nums  || d=4
console.log(c);

let a1=5,b1=6;
console.log(a1,b1);
[a1,b1]=[b1,a1];  // swapping
console.log(a1,b1);

let words="my name is myname ab bc".split(' ');
console.log(words);
[a,b,c,...d]=words;
console.log(b,d);
