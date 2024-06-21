const myHeading = document.querySelector("h1");
myHeading.textContent = 'Hello World';

// Variable declaration and assignment
let myName = "Emeka"

// The value of the let variable can be reassigned
// variables may hold different data types. eg below is a string
// data types includes strings, numbers (integers), booleans, array (store values in a single referencee), objects (everything is an object),
myName = "Junior"

// Operators are mathematical symbol that produces a result based on two values or variables
// strict equality performs a test on two values to check if they are of the same data type. It returns True or False
// Not, Does-not-equal - returns the logical opposite value of what it precedes ie it turns true to false, equal to not equal eg !, !==

// Conditionals
// Teest statements to check if an expression is true or false

let food = "Beans";
if (food === Beans){
	alert("I will have beans!);
}else{
	alert("No, I will have rice");
}

// Functions
// Grouping functionalities that needs to be reused.
// There are defines and built in functions. Functions often take arguments

function multiply(num1, num2){
	let result = num1 * num2;
	return result;
}
// Function call
multipy(9, 8)
multiply(8, 8)

// Events
// These are structures that listens for events and activities, running code based on their responses.
clickevent = document.querySelector("html").addEventListener(click, function (){
	alert("You clicked the html DOM");
})

// An anonymous function does not have a name eg the function above. The alternative of an anonymous functionis an arrow function
// arrow function uses () => instead of function ()

clickevent_arr_func = document.querySelector("html").addEventListener(click, () => {
	alert("Hello, I am a click event listener");
})
