#!/usr/bin/node

// In the example below, addEEventListener is already a function/in-built
// it receives 2 parameters
// anonymous functions are used functions receive other  functions as parameters.
// this is explained in the example

// General example
function logKey(event){
	console.log(`You press ${event.key}`);
}

btnName.addEventListener('keydown', logKey);


//Anonymous function example
// Now instead of defining a separate logKey function, it can be passed as an anonymous function
btnName.addEventListener('keydown', function (event) {
	console.log(`You pressed ${event.key}`);
});

// The alternative form of the anonymous function is the arrow function
// instead of function(event), you use (event) =>
btnName.addEventListener("keydown", (event) => {
	console.log(`You pressed ${event.key}`);
});

// if the function takes only one parameter, the parenthensis around the argument can be ignored
btnName.addEventListener("keydown", event => {
	console.log(`You pressed ${event.key}`);
});


// Additionally, if your function contains a single return line expression, you can
// ignore the curly braces around the return statement, implicitly returning the expression
// Example: Arrow func returning the double of an array of integers

const single = [1, 2, 3, 4, 5];

const double = single.map(i => i * 2)
console.log(double)

// arrow function: i => i * 2 is equivalent to 
function double(i) {
	return i * 2;
}

// Arrowfunctions make your code more readable and concise . Highly recommendable
// Though arrow functions are different from normal functions