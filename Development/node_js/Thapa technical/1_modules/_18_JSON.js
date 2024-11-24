/*
JSON --> Javascript object Notation. JSON is a lightweight format for sorting and transporting data.
JSON is often used when data is send from a server to a web page.
*/

const fs = require("fs");

const bioData = {
  name: "ben",
  age: 12,
  channel: "CN",
};

// console.log(bioData);
// console.log(bioData.channel);

// stringify used when object is converted into JSON.
const jsonData = JSON.stringify(bioData);
// console.log(jsonData);
// console.log(jsonData.channel);  // undefined


// Async
fs.writeFile("_18_fileCreated.json", jsonData, (err) => {
  console.log("done");
});
// Async
fs.readFile("_18_fileCreated.json","utf-8",(err,data)=>{
    console.log(data);
    const orgData =JSON.parse(data);
    console.log(orgData);
})

// parse used when json is converted into Object.
// const objData = JSON.parse(jsonData);

// console.log(objData);

/*
what to do:::
    1) Convert to Json.
    2) add to other file.
    3) read file.
    4) again convert back to js obj original.
    5) show in console.
*/
