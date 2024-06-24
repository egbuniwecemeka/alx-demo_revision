const myElement = document.querySelector('#parent');
const x = 1;

// Throws a Refrence error if called from outside its scope
function a() {
    const y = 2;

    // prints accessible value of x (global scope)
}

// Does not throw a Refrence error because it is called by a function within its scope
function b() {
    const z = 3;
    output(z);
}

function output(val) {
    const tag = document.createElement('p');
    tag.textContent = `Value ${val}`
    myElement.appendChild(tag);
}