/*
node.js have a builtin module called 'events'.
here u can create, fire, and listen for your own event.

♦ Example 1: Registering for the event to be fired only one time using once.
♦ Example 2: Create an event emitter instance and register a couple of callbacks.
♦Example 3: Registering for the event with callback parameters.
*/

// const event = require('event');
// cosnt EventEmitter=new event.EventEmitter();

const EventEmitter = require("events"); // class
const event = new EventEmitter(); // object

event.on("sayMyName", () => {
  // define before call
  console.log("your name is Ben");
});

event.on("sayMyName", () => {
  // define before call
  console.log("your name is ten");
});

// event.emit('sayMyName');

event.on("checkPage", (sc, msg) => {
  // status code,message
  console.log(`status code is ${sc} and the page is ${msg}`);
});
event.emit("checkPage", 200, 'ok');

/*
the concept is quite simple : Emitter objects emit named events that cause previously registered listners to be called. So,  an emitter object basically hs two main features:
♦ emitting name events.
♦ registering and unregistering listner functions.
*/
