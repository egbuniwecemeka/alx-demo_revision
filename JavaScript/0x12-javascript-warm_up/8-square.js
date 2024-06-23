#!/usr/bin/node

const {argv} = require('node:process');

const size = argv[2];

if (isNaN(size)){
	console.log("Missing size");
}

for (i = 0; i < size; i++){
	// declaring row variable and use inside the loop is necessary for 
	// properly constructing the rows in the grid of squares.
	let row = ''
	for (j = 0; j < size; j++){
		row += j;
	}
	console.log(row);
}
