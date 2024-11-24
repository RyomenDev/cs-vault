const server = require("express"); //importing express

const app = server(); // create express application on the app variable-used to understand the various function
app.use(server.json()); // used the JSON file(js object notation)

//port environment variable
const port = 5678;
app.listen(port, () => console.log("listining on Port " + port)); //we will use this command to list the server to the port

// give the data to the server
const T1 = [
  { title: "George", id: 1 },
  { title: "Josh", id: 2 },
  { title: "tyler", id: 3 },
  { title: "Alice", id: 4 },
  { title: "Candice", id: 5 },
];

const T2 = [
  { title: "A", id: 6 },
  { title: "A", id: 7 },
];

const T3 = [
  { title: "A", id: 8 },
  { title: "w", id: 9 },
];

// read request handelers
// display the message when the url consists of '/'
app.get("/welcome", (req, res) => {
  // read the resource
  res.send("welcome to my first Api Get Request");
});
// http://localhost:5678/welcome

// display the list of customers when the url request consists of API customer
app.get("/data1", (req, res) => {
  res.send(T1);
});

app.get("/T2", (req, res) => {
  res.send(T2);
});

app.get("/T3", (req, res) => {
  res.send(T3);
});
