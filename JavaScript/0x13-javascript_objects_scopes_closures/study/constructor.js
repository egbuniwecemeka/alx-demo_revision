// The below is a construuctor function that returns an object that contains two members
// one a property and the other a method
function profile(name){
    const obj = {};

    obj.name = name;
    obj.introduction = function () {
        console.log(`Hello, I am ${this.name}`);
    }

    return obj;
}

// The following constructor code can be used to now create as many objects as possible
// Constructor call
const person = new profile("EJ");
console.log(person.introduction());

// The use of the above function works but involves complex process of creating objects, initialize it, return it.
// All this can be better done using constructors
// A constructor is a function called using the new keyword