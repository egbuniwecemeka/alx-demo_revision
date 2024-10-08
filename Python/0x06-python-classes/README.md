# Object Oriented Programming

* Procedure-oriented programming - Functions
* Object oriented programming - A class creates a new type where objects are instances of the class.
* Variables belonging to a class or object are known as fields
* Functions belonging to a class are known as methods
* Collectively, fields and variables are referred to as attributes

Fields are of two types namely;

* instance/object variables - belongs to each instance/object
* class variables - belongs to the class.

## The self

The self variable refers to the object itself

## __init__ method
This method is run as soon as the object of a class is instantiated

* __init__ method is useful for initialization (passing initial values to objects)

## Classes and Variables

The functionality part of classes and objects includes __methods__ while the data part (fields) of classes and variables deals with the __namespaces__.

2 types of fields

* Class variable - shared. Can be accessed by all instances of the class. There is only one class variable through the class and a change to it reflects in all class instances.
* Object variable - owned by individual instances/object of the class. Update of it does not affect all or other class instances but its specific object instance.

* Note: object variable with the same name as the class variable will hide the class variable.

* Every object also refers to its class using the self._class__ attribute

* Class methods belong to the class and are defined using either __classmethod__ or __staticmethod__ (future research)

* Mark classmethods using a decorator. A decorator is a shortcut to a wrapper function ie a function that "wraps" another function as argument. The reason for this is to do something before or after the wrapped function