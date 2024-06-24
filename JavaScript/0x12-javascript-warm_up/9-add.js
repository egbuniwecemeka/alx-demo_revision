#!/usr/bin/node

const {argv} = require('node:process');

const a = Number(argv[2]);
const b = Number(argv[3]);

const len = argv.length - 2

function add(a, b){
	if (isNaN(argv[2] || len < 2)){
		console.log(NaN);
	}else{
		return a + b;
	}
}

console.log(add(a, b))
