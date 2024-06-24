#!/usr/bin/node

const {argv} = require('process');

const length = argv.length - 2;
console.log(length);

if (isNaN(length) || length < 1){
	console.log("Not a number");
}else{
	console.log(`My Number: ${parseInt(argv[2])}`);
}
