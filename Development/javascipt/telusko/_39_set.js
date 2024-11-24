

// set hold unique values , in js it maintains the order in which added
// no index value

let nums = new Set("bookkeeper");

nums.add(3);
nums.add("ben");
console.log(nums);

nums.forEach(value=>{
    console.log(value);
});
nums.forEach((value,value1,nums)=>{ // value1 is repeated value
    console.log(value,value1);
});

console.log(nums.has(3));
console.log(nums.has("ben"));
