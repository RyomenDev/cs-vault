
const os = require('os');

console.log(os.arch());  // architecture

console.log(os.hostname());
console.log(os.platform());
console.log(os.tmpdir());
console.log(os.type());

console.log(os.freemem()); // free memory -> ram
console.log(`${os.freemem()/1024/1024/1024}`); // RAM

console.log(os.totalmem()); // total memory -> ram
console.log(`${os.totalmem()/1024/1024/1024}`); // RAM
