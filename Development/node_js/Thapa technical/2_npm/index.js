
const validator = require("validator");
const chalk = require("chalk");

// console.log(chalk.red.italic('Hello world!!! 🎉🎉🎉'));
console.log(chalk.yellow.underline('Hello world!!! 🎉🎉🎉'));
// console.log(chalk.yellow.underline.inverse('Hello world!!! 🎉🎉🎉'));

// console.log(chalk.blue('hello world!'));

const mail = "abc12@gmail.com";

// const res=validator.isEmail("abc12@gmail.com");
const res = validator.isEmail(mail);
console.log(res);
console.log(res ? chalk.green.inverse(res) : chalk.red.inverse(res));

// installing nodemon
// npm i nodemon -g

//7:00
