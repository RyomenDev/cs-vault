// fs - file system

const name="thapa";
console.log(name);

const fs=require("fs");

// fs.appendFileSync("_05_read.txt","how r u ?")

const buf_data=fs.readFileSync("_05_read.txt");
console.log(buf_data);

org_data=buf_data.toString();
console.log(org_data);

// renaming file
// fs.renameSync('_05_read.txt','_05read.txt');