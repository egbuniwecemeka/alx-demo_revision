#!/usr/bin/node

class Rectangle {
	constructor(w, h) {
		if (w <= 0 || h <= 0) {
			return;
		}
		else {
			this.width = w;
			this.height = h;
		}
	}

	print() {
		for (let i = 0; i < this.height; i++) {
			let row = '';
			for (let j = 0; j < this.width; j++) {
				row += 'x';
			}
			console.log(row);
		}
	}

	double() {
		this.width = this.width * 2;
		this.height = this.height * 2;
	}

	rotate() {
		const temp = this.width;
		this.width = this.height;
		this.height = temp;
	}
}

module.exports = Rectangle;
