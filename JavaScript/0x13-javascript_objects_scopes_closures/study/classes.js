// If the constructor is omitted, a default constructor is created.
class Animal{
    snake(){
        console.log('hiss');
    }
}

const reptile = new Animal;
reptile.snake()

class Person{
    // property name declaration is optional
    name;

    // constrctor takes name parameter to initialize objects name parameter
    constructor(name){
        this.name = name;
    };

    // method refer to the object properties using 'this'
    greeting(){
        console.log(`I am ${this.name}`);
    };
}

// now this class can be used to initialize multiple 
const chioma = new Person("chioma");
const shola = new Person("Shola");

console.log(chioma);
console.log(chioma.greeting());
console.log(shola);
console.log(shola.greeting());

// Given the Person class above, lets define a Professor subclass
// extend is used to indicate it inherits from another class.
class Professor extends Person{
    teaches;

    constructor(name, teaches){
        //superclass constructor takes care of setting property.
        // If a subclass has any initialization to do, it must first call the superclass constructor
        // This is done using super() and the parameter the superclass is expecting is passed into it.
        super(name);
        this.teaches = teaches;
    }
    // This overrides the initial method implementation in the superclass
    greeting(){
        console.log(`I am ${this.name} and I will be teaching you ${this.teaches}.`);
    }

    grade(paper){
        const grade = Math.floor(Math.random() * (5-1) + 1);
        console.log(grade);
    }
}

const professor = new Professor('Okojie', 'Econometrics');
professor.greeting();
professor.grade();




