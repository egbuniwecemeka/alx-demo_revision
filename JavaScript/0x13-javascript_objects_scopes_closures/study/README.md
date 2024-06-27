# JavaScript - Objects, Scopes and Closures

* Objects are collections of related data and functionalities. They consist of variables and functions commonly referred 
to as properties and methods.
* Creating an object in JS requires firstly assigning it to a variable.
* Arrow functions do not have their own *this* context, but inherit it from the surronding scope. regular function expressions access the *this* context of the object they belong to.
* Objects consist of properties (data items) and functions (methods)
* Objects can be created as object literals or instantiated from Classes
* **Objects properties and methods can be accessed uusing *dot notation*. The object acts as the namespace (It must be entered first to access anything in the object)**
* An object property itself can be an object.
* To access inner object properties of object properties, chain with an extra '.' to access its items
* bracket notation is an alternative to dot notation as it uses the name associated with each properties value. **This property is why the are sometimes referred as assosiative arrays** 
* Dot notation is often preferred to bracket notation because it is clear and concise
* Although sometimes dot notation cannot be used. This are instances where object property is in a variable.
* Object members can be retrieved as well as being set (updated)
* Aside updating object properties and methods, object properties and methods can be created
* Bracket notation can be used to set not only members value dynamically, but also member names.
* ***this* refers to the current object the code being executed**
* In the case of an object method, *this* refers to object the method is called on
* This is useful in constructors by using single object definition to create more than one object
* **Object literals are useful in creating single objects but not in creating multiple objects**. This will mean we have to create multiple objects which is not ideal. Hence the use of constructors.
* **A *constructor* is a function containing the new keyword**
* When a constructor is called, it **creates a new object, bind this to the object, run the code in the constructor, return the new object**
* By convention constructors start with a capital letter

## Classes in JavaScript

Objective: understanding how to use the features provided by JavaScript to implement classical object-oriented programs

* A class can be deeclared using the **class** keyword
* constructor *keyword* creates a new object, bind this to the new object, runs the code in the constructor and returns the new object.
* if the default constructor is omitted, a default constructor is generator.

## Inheritance

* The keyword **extends** is used to inherit from another class.
* If a subclass has its own initialization, it must first call the superclass constructor 'super()' and pass parameters expected by the superclass.

## Encapsulation

