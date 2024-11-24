/*
Streams are object that let you read data from a source or write data to a destination in continous fashion. 
streaming means listening to music or watching video in 'real time', instead of downloading a file to your computer and watching it later.
In node.js there are four type of streams--
   ♦ Readable: Stream which is used for read opearation
   ♦ Writeable: Stream which is used for Write opearation
   ♦ Duplex: Stream which is used for both read ans write opearation
   ♦ Transform: A type of duplex stream where the output is computed based on input.
*/

/*
Each type of Stream is an EventEmitter instance and throws several events at different instance of time. For example, some of the commonly used events are-
    ♦ Data: This event is fired when there is data is available to read.
    ♦ End: This event is fired when there is no data available to read.
    ♦ Error: This event is fired when there is any error receiving or writing data.
    ♦ Finish: This event is fired when all the data has been flushed to underlying system.
*/

const fs = require("fs");
const http = require("http");

const server = http.createServer();

server.on("request", (req, res) => {
  //   fs.readFile("_21_input.txt", (err, data) => {
  //     if (err) return console.log(err);
  //     res.end(data.toString());
  //   });

  // 2nd way - reading from stream
  const rstream = fs.createReadStream("_21_input.txt");
  rstream.on("data", (chunkData) => {
    res.write(chunkData);
  });
  rstream.on("end", () => {
    res.end();
  });
  rstream.on("error", (err) => {
    console.log(err);
    res.end("file not found");
  });
});

server.listen(8000, "127.0.0.1", () => {
  //(port,localhost)
  console.log("listening to port no. 8000");
});
