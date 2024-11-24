// the http.createServer() method includes request and response parametes which is supplied by Node.js .

// the request object can be used to get information about the current HTTP request
//eg. url, request header, and data.

// the response object can be used to send a response for a current HTTP request.

// If the response from the HTTP server is supposed to be displayed as HTML, you should include an HTTP header file with the correct content type.

const http = require("http");

const server = http.createServer((req, res) => {
  res.end("hello from the other's side");
});

server.listen(8000, "127.0.0.1", () => {
  //(port,localhost)
  console.log("listening to port no. 8000");
}); // http://localhost:8000/
