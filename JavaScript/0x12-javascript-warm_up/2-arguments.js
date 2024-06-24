#!/usr/bin/node

/** 
 * A script that prints a message depending on command-line arguments passed
 * If no argument, print "No argument"
 * If only one argument, print "Argument found"
 * Else, print "Arguments found"
*/

const {argv} = require('process');

const length = argv.length - 2;

if (length == 0){
	console.log("No argument");
}else if (length == 1){
	console.log("Argument found");
}else{
	console.log("Arguments found");
}
