// run `node index.js` in the terminal

// console.log(`Hello Node.js v${process.versions.node}!`);

// const command = process.argv[2];

// if (command=='addTemp')
//   console.log("it is addTemp")
// else
//   console.log("not addTemp");

const yargs = require("yargs");

yargs.version("1.1.1");

// command to add
yargs.command({
  command: "addTemp",
  describe: "just a test yarn command",
  builder: {
    title: {
      describe: "not a title",
      type: "string",
      demandOption: true,
    },
    body: {
      describe: "Note Body",
      type: "string",
      demandOption: true,
    },
  },
  handler: function (argv) {
    // console.log('checking / adding whatever addTemp');
    console.log(`Title: ${argv.title}`);
    console.log(`Body: ${argv.body}`);
  },
});

// command to delete
yargs.command({
  command: "deleteTemp",
  describe: "just a test delete yarn command",
  builder: {
    title: {
      describe: "remove a title",
      type: "string",
      demandOption: true,
    },
  },
  handler: function ({ title }) {
    console.log(`removed whatever addTemp ${title}`);
  },
});

// console.log(yargs.argv);
yargs.parse();

// command to List
yargs.command({
  command: "ListTemp",
  describe: "just a test Listing yarn command",
  handler: function () {
    console.log("listing all nodes");
  },
});

// command to read single note
yargs.command({
  command: "readTemp",
  describe: "just a test read single note yarn command",
  builder: {
    title: {
      describe: "read a note title",
      type: "string",
      demandOption: true,
    },
  },
  handler: ({ title }) => {
    console.log(`read particular note ${title}`);
  },
});

// console.log(yargs.argv);
yargs.parse();

// commands
/*
node index.js addTemp
node index.js addTemp --help
node index.js addTemp  --title="MY NOTE" --body="my first note"

node index.js deleteTemp
node index.js addTemp --help
node index.js addTemp  --title="MY NOTE"

*/
