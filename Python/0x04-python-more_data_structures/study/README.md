# More Structures: Sets and Dictionaries
## Sets
This are unordered collections containing no duplicate values. They can be created using set() or {}. Note also that using an empty curly brace to declare a set will declare a dictionary. Therefore to define an empty set use set()


## Dictionaries
Dictionaries are indexed by keys (usually immutable data types: numbers and strings), tuples may also be used, but they must contain only strings, or numbers, or tuples. Note: If a tuple contain any mutable type, it cannot be used as a key.
* List can't be used as keys (because they can be modified)
* A dictionary is a set of 'key: value' pairs. Although the keys are unique
* {} empty curly braces creates an empty dictionary. 'key: value' pairs can be written inside while seperated by commas

* Main operation in a dictionary involves creating or storing a value using a key and extracting the value with its respective key.
* key: value pair can be deleted using del.
* If a value is stored to an old existing key, the old value associated with the key is forgotten
* Extracting a value from a non-existing key results in an error
* using list(dict) on a dictionary lists all the keys in the dictionary.
* sorted(dict) is used to sort keys in a dictionary
* to check if a single key is in a dictionary use *in* keyword
* The dict() constructor with sequences of tupled 'key: value' pairs can be used to create dictionaries. Note that the key,value pairs in the tuples are seperated by commas instead of full-columns
* list comprehension are also supported.
* keyword arguments can be used when keys are simple strings

### Looping Techniques
* When looping through dictionaries, the key and corresponding value can be retrieved at the same time using the items() method.
* To specify a sequence in reverse, first specify in the noraml forward direction then apply the reversed function
* loop over two or more sequence using zip() method
* enumerate() function returns the position index and corresponding value of a sequence
* using set() with sorted() is a unique way to loop over unique elements in a sequence.

### More on Conditions
* while and if statements can contain any operator, not just conditionals
* *in* and *not in* used for membership test. Determines if a value is in or not in.
* *is* and *is not* use to check if two objects are the same object.
* Comparisions can be chained eg a < b == c. Test whether a is less than b, and b equals c
* Comparisions my be combined using the boolean *and* and *or*(lowest priority). *not*(highest priority) is to negate the outcome of a comparision
* and an od are short-circuit operators


## Lambda Operator, fiter, map and reduce
Guido van Russuo initially proposed to remove lamba, map, reduce and filter from the Python language but faced resistance that led to him admitting defeat. What changed was reduced being moved to be a module function while lamba, filter and map remains part of core Python till this day.

His points for dropping them were:
* list comprehension is an alternative to lambda, filter and reduce
* list comprehension are easier to understand
* having list comprehension as well as lamba, filter, map and reduce goes against the Python motto 'there should be only one way to solve a problem

### Lamda operator
This is a way of declaring anonymous functions. Anonymous functions are functions without a name.
* Anonymous functions are throw-away functions. They are only needed where they have been created. **Also, note that these anonymous functions can be assigned to a variable to get a name**
* Lambda functions are used in combination with filter(), map(), reduce()
* **labmbda general syntax: lambda argument-list: expression**
* the argment_list is  comma, seperated list of arguments
* the expession is an arithmetic expression using these arguments
* The use of this method will be clear an understanding the map() function

### Map function
The advantage of the lambda function can be fully seen when used with map().
* map(func,seq) is used with two arguments
* the first aargument is a function **func**
* the second argument is a sequence (eg list) **seq**
* Note: map() returned list before Python3, where each element of the resulting list was a result o function func applied on the list/tuple element (seq)
* map can be applied to more than one list, the list can be of different lengths. map() applies its lambda function to element of the argument list ie first elements of 0th index, then elements of 1st index etc
* if a list has more elements than another, map stops on completion of the shortest list


