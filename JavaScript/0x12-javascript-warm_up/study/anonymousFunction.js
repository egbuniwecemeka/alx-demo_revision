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
btnName.addEventListener('keydown', (event) => {
	console.log(`You pressed ${event.key}`);
});
