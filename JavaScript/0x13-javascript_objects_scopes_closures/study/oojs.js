const person = {
    name: ['Emeka', 'Egbuniwe'],

    age: 28,

    // An object property can be an object.
    skill: {
        IT: 'Software Engineer',
        supplyChain: 'Warehouse Officer'
    },
    height: 5.9,
    // if a method ':' and 'function can be omitted
    bio() {
        console.log(`I am ${this.name[0]} ${this.name[1]} and i am ${this.height} tall`)
    },
    // Here, ':' and 'function is not omitted
    introduction: function() {
        console.log(`Hi! I am ${this.name}.`);
    },

    // Bracket notation can be used to set not only member values dynamically
    // but also set member names dynamically too
};

const myDataName = "height";
const myDataValue = 1.79;
person[myDataName] = myDataValue

console.log(person.height)



// logName uses people[propertyName] to retrieve the property value for
// propertyName
function logName(propertyName) {
    console.log(person[propertyName]);
};

console.log(person.name);
console.log(person.skill.IT);    //dot notation
person["skill"]["supplyChain"]  //bracket notation
person.name[0];     
person.bio();
person.introduction();
logName("name");

// Object setter. This can be done either by dot or bracket notation
person["name"] = "Junior";
person.age = 30
console.log(person.age)
console.log(person.name);

// Creating object property and method
person["complexion"] = "black";
person.bye = function () {
    console.log('Bye everyone');
};
console.log(person["complexion"]);
console.log(person.bye());