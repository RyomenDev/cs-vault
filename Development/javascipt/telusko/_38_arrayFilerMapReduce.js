let nums = [42, 51, 98, 87, 23, 50];

// console.log(nums.filter((n=>n%2==0)));

let result=nums
  .filter((n) => n % 2 == 0)
  .map((n) => n * 2)
  .reduce((a,b)=>a+b);

//   .forEach((element) => {
//     console.log(element);
//   });

console.log(result);
