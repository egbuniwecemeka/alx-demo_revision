// The following examples aim to explain the different ways of defining and exporting various functions/components in NodeJs modules

// Exporting a global function
// Absence of let, const or var makes foo a global function (This is generally not recommended because you should avoid polluting the global namespace)
foo = function () {
    console.log('Hello');
}

/**
 * An example of how the following global function will be called from another module
 * require('./"fooFunctionFileName");
 * foo();
*/

// Exporting an anonymous function
module.exports = function() {
    console.log("foo!");
}

/** Example of module or app that uses it
 *  var bar = require('./barFunctionFileName);
 *  bar();
*/

// Exporting a named function
exports.fiz = function() {
    console.log('fiz!')
}

/** Usage: App using name function
 * var app = require(./).fiz():
 *  fiz();
*/

// Exporting an anonymous object
var Buz = function() {};

Buz.prototype.log = function() {
    console.log("Buz!!!");
};

// Module exports anonymous object
module.exports = new Buz();

/**
 * Here's an app that uses it
 * var buz = require('./BuzFileName');
 * Buz.log();
*/

// Exporting a name object
var Boo = function() {};

Boo.prototype.log = function() {
    console.log("My love!");
};

exports.fiz = new Boo;

/** Here is an app that uses it
 * var boo = require('./BooFileName').Boo;
 * boo.log();
*/

// Exporting an object prototype
var Pro = function() {};

Pro.prototype.log = function() {
    console.log('Prototype');
}

exports.Pro = Pro;

/** An app using it
 * var Pro = require('./ProFileName').Pro:
 * const pro = new Pro();
 * pro.log()
 */;