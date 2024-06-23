#!/usr/bin/node

/**
 * A script that prints two arguments passed to it
 * both strings will be concatenated to the string "is" on both sides
*/

// Destructures the process module, directly extracting the argv module
// and assigns it to the variable.
const {argv} = require('process');

const length = argv.length - 2;

if (length <= 2)
{
	console.log(`${argv[2]} is ${argv[3]}`);
}
