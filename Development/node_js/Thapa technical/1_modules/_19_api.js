// https://jsonplaceholder.typicode.com/users

const fs = require("fs");
const http = require("http");

const server = http.createServer((req, res) => {
  //    console.log(req.url);

  const data = fs.readFileSync("_19_create_API.json", "utf-8");
  const objData = JSON.parse(data);

  if (req.url == "/") {
    res.end("hello from the other's side");
  } else if (req.url == "/about") {
    res.write("hello from the about side");
    res.end(); // necessary to send msg
  }
  //   -------------------------------------------------

  //   `${__dirname}/1_modules/_19_create_API.json`
  else if (req.url == "/userAPI") {
    // fs.readFile("_19_create_API.json", "utf-8", (err, data) => {
    //   console.log(data);
    //   res.write(data);
    //   const objData = JSON.parse(data);
    res.writeHead(200, { "content-type": "application/json" });
    res.end(objData[1].name);
    // res.end("\nhello:: from the about side");
    // });
  }

  //   ------------------------------------------------
  else {
    res.writeHead(404, { "Content-type": "text/html" }); // for status 404 error & error in console.
    res.end("<h1>Error 404 from the about side</h1>");
  }
});

server.listen(8000, "127.0.0.1", () => {
  //(port,localhost)
  console.log("listening to port no. 8000");
}); // http://localhost:8000/
