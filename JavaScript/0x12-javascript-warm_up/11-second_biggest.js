#!/usr/bin/node

const {argv} = require('node:process')

const len = argv.length - 2;

if (len <= 1){
	console.log(0);
}else{
	const arr = argv.slice(2).map(Number);
	const second = arr.sort(function (a, b) {return b - a})[1];
	console.log(second);
}
