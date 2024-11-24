// console.log("hello world");

var http = require('http')

http.createServer(function(req,res) {

    res.writeHead(200,{'Content-Type':'Text/html'})
    res.write("welcome back alein!!!")

    res.end()

}).listen(8080)
// 127.0.0.1:8080