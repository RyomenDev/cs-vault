// _19_class.html

var protocol = require("http");

protocol
  .createServer(function (req, res) {
    res.writeHead(200, { "Content-Type": "text/plain" });
    res.end("Introduction to Node");
  })
  .listen(1234);


//   http://localhost:1234/