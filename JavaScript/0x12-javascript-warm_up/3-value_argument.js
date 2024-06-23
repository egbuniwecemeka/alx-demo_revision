#!/usr/bin/node

/**
 * A script that prints the first argument passed to it
 * If no argument is passed, print "No argument"
*/

const {argv} = require('process');

if (argv[2] == undefined){
	console.log("No Argument");
}else{
	console.log(argv[2]);
}


// Additional functionality to print multiple command line arguments
/*
for (i = 2; argv[i] !== undefined; i++){
	console.log(argv[i]);
}*/
