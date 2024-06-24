# 0x12. JavaScript - Warm up

Two main reasons of how JS will be used will be

* Scripting
* Web front end

## Writing JavaScript codes

### JavaScript basics

* JS adds interactivity to your website
* JS was invented by Brendan Eich
* JS has various tools and functionalities which inludes **Browsers API (provides functionalites), Third-party API's, Third-party frameworks and libraries (applied to accelerate website development)*
* *script* works the same way as *link* in CSS
* *prompt* and *alert* are similar but differs for *input* and *output*
* *localStorage* API allows storage in the browser for retrieval later.
* *setItem* method creates and stores a data item
* *null* is a special variable in JavaScript that represents the absence of a value

## Variables

* A variable is a container for a value.
* The content of an object can be updated, created or removed regardless whether declared using const, because although object's content changes, object's reference does not.

### When  to use let vs const

* *Use const where you can, and you let where you have to*

## JavaScript data types and data structures

* JavaScript is a weakly typed ie it allow implicit type conversion
* all primitive types exceot nullcan be tested using the typeof operator
* undefined means the abscence of a value while null stands for the abscence of an object.
* null test: *typeof null === object*
* return without a value returns undefined
* obj.iDontExist returns undefined
* methods that interact with prototype return undefined, if no element is found
* null is a keyword, while undefined is an identifier (global)
* number data type is capable of storing numbers from 2-1074 (Number.MIN_VALUE) and 21024 (Number.MAX_VALUE)
* safe integers are saved within the range of -(2^53 - 1) (Number.MIN_SAFE_INTEGER) and 2^53 - 1. Outside this range JavaScript cannot safely represent integers.
* Check safe integers using Number.isSafeInteger()
* Positive values greater than Number.MAX_VALUE are converted to +infinity
* Positive values smaller than Number.MIN_VALUE are converted to +0
* Negative values smaller than -Number.MAX_VALUE are converted to -Infinity.
* Negative values greater than -Number.MIN_VALUE are converted to -0
* *NaN* special number value returned when the arithmetic operation cannot be expressed as a number
* *BigInt* primitive data type used to represent integers with arbitrary (random) magnitude, with BigInt, it is possible to operate on numbers outside the safe integer limit.
* **A BigInt is created by appending n to an integer or using BigInt()**
* Most operators +, -, *, /, **, and % can be used with BigInt. Only >>> is forbidden.
* A BigInt is not strictly equal to a number of the same value, but is loosely so.
* The length of a string is the number of UTF-16 code units in it.
* JavaStrings are immutable
* *substring()* are used to create a sub string of the original string
* use *+ or concat()* to concatenate two strings
* A Symbol is a unique and immutable primitivve value which can be used as a key, In programming, symbols may be referred to as 'atoms'. Keys create unique property keys that do not clash with other codes.
* In JavaScript, objects are the only mutable values. Note, Functions are also objects with the capability of being *called*
* In JavaScript, an object can be seen as a collection of properties.
* Object properties are equivalent to key-value pairs
* Property values can be of any type, including other objects
* Two types of object properties, namely; **data property and accessor property**. Each property has its attribute.
* Each attribute is accessed internally bu JS engine by can be set through Object.defineProperty(), or read through Object.getOwnPropertyDescriptor()
* **Data property** associates keys with values. It can be described by the following attributes; **value, writable, enumerable, configurable**
* **Accessor property** associates keys with one of two accessor functions **(get and set)** to retrieve or store a value
Note: Accessor property defers from accessor method. Accessor proptery attributes include; **get and set**
* get is a function call with an empty argument listcto retrieve the values of a get access method
* set is a function call with an argument containing the assigned value.. This is executed when a specified property change is needed.
* other attributes includes **enumerable, configurable**
* **The prototype of an object points to another object or to null** 
* The prototype is conceptually a hidden property of the object represented by **[[Prototype]]**
* Objects aare key-value pairs hence their often use as maps. Although there are pros and cons of this.
* Use built in **Date** utility
* Arrays are regular objects with a relationship between indexed properties and the length property
* **Arrays inherit from Array.prototype** eg **indexOf()** for value at particular index, **push()** appends at end of an array
* Arrays are good options for ordered lists
* *Typed-Arrays* are array-liked view of underlying binary data buffer, it also offers methods and semantics similar to arrays.
* Type arrays are often used with *ArrayBuffer* and *DataView*
* Keyed collections consist of Maps, Sets, WeakMaps, WeakSets
* **Set and WeakSets represent a collection of unique values**
* **Map and WeakMaps represent a collection of key-value associations**
* To bind data to a node DOM, properties could be set directly on the object, or data-*
* The downside to this is the data is available to any script running in the same context.
* **MapS and WeakMapS make it possible to privately bind data to an object**
* **JSON (JavaScript Object Notation) is a light-weight data interchange format. Originally derived from JavaScript but commonly used in other programming languages.**
* **JavaScript has a standard library of built in objects. Use them!**
* **JavaScript is a weakly typed language. This means that there are usually type conversions**
* Types of type coercion includes; primitive coercion,
* objects are converted to primitive values by calling **[@@toPrimitive()], valueof(), toString() methods, in that order**
* Two types of numeric coercion are Number and BigInt
* Numeric coercion is almost same with number coercion, except BigInts are returned instead of a TypeError
* Numeric coercion is used by all arithmetic operators except *unary plus* which uses number coercion.
* There are three distinct paths in which objects may be converted to primitives namely; 
* primitive coercion, [@@toPrimitive]("default") → valueOf() → toString()
* numeric, number, BigInt coercion [@@toPrimitive]("number") -> valueOf() -> toString()
* String coercion [@@toPrimitive]("string") -> toString() -> toValue()
* if present, [@@toPrimitive] must be callable and return a primitive. While valueOf and toString wll be ignored if not callable or return an object.


## Functions
* Some functions are not part of the built in functions but are defined as browsers APIs, to provide more functionalities.
* Functions that are part of objects are called methods*
* Three basic processes of functions are; function declaration, function definition and function call
* Function parameters are values that are included inside function parenthesis for proper function execution.
* Parameters can also be called arguments, properties or attributes
* Multiple parameters are separated by commas. Parameters are also optional
* Default parameters can be supported with the use of '='

### Anonymous functions and arrow functions
* Anonymous functions are functions without name
* **They are often used when a functions expects or uses another function as parameter**
* This form of functions are often know as function expression. Note such functions are not hoisted.
