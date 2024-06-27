#!/usr/bin/node

/*
 * A class that defines a Rectangle
 * constructor takes to args w and h
 * width and height attribute is initialized with the value w and h
*/


class Rectangle {
	// Initializes and creates an object of the class
	constructor(w, h) {
		// Conditional check and expression
		if (w <= 0 || h <= 0) {
			return;
		} else {
			this.width = w;
			this.height = h;
		}
	}
}

module.exports = Rectangle;
