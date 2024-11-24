const http = require("http");

const server = http.createServer((req, res) => {
  //    console.log(req.url);
  if (req.url == "/") {
    res.end("hello from the other's side");
  } else if (req.url == "/about") {
    res.write("hello from the about side");
    res.end(); // necessary to send msg
  } else {
    res.writeHead(404,{"Content-type":"text/html"}); // for status 404 error & error in console.
    res.end("<h1>Error 404 from the about side</h1>");
  }
});

server.listen(8000, "127.0.0.1", () => {
  //(port,localhost)
  console.log("listening to port no. 8000");
}); // http://localhost:8000/

/*
1. informational responses (100-199)
2. successful responses (200-299)
3. redirects (300-399)
4. client errors (400-499)
5. server errors (500-599)
*/