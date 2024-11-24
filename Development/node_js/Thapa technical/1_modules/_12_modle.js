
const add = (a,b) => {
    return a+b;
};
const sub = (a,b) => {
    return a-b;
};
const mult = (a,b) => {
    return a*b;
};

console.log(add(5,5));
console.log("module");

// module.exports = add; -> if 1 module is present.

const name ="ben";
// module.exports = name;

// module.exports.add = add;
// module.exports.sub = sub;
// module.exports.mult1 = mult;

module.exports = {add,sub,mult,name};
