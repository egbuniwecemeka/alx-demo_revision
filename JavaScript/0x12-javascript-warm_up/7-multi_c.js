#!/usr/bin/node

const {argv} = require('node:process');

const len = argv.length - 2;
const str = "C is fun";

if (isNaN(argv[2]) || len < 1){
    console.log("Missing number of occurrences");
}

for (i = 0; i < argv[2]; i++){
	console.log(str);
}
