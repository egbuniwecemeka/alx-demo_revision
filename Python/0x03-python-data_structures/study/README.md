# Lists and Tuples

## Lists
* These are mutable comma-seperated values in square brackets.
* They can be accessed via indexing
* Slice operationns can be carried out on lists
* 

### List methods
* list.append(x)
* list.extend(iterable)
* list.count(x)
* list.copy()
* list.remove(x)
* list.pop([i])
* list.insert(i, x)
* list.index(x[, start[,end]])
* list.clear()
* list.sort(\*, key=None, reverse=False)
* list.reverse()

### List as a stack

List methods make it easy to use lists as stack, Last-In-First-Out (LIFO) where the last element inserted into the list is the first retrieved

### List as queue
It is also possible to use a list as a queue ie Firt-In-First-Out. Although thisis not iea as performing append and pop operations o the first item in a list is slo because it shifts every other element int he list byone. **Therefore, for fast appends and pops at both ends, colletions.dequeue has been designed for this**

### List as comprehension
Elements of list comprehension are a result of operations with sequence of other iterables. Thi i  concise way of creating desired lists.

### Nested List Comprehension
The main or initial expression in list comprehension can be an arbitary operation (arbitary operations are operations containg varities of operations/logic/values), including another list comprehension

* Note: In the real world, you should prefer built-in functions to complex statements.
* zip() function is a very useful function for list use cases. It takes multiple iterable objectseg lists and tuples and returns and returns an iterator of tuples where the ith iterator is the i-th element.

### del statement
Theis a way of deleting from lists by their index insted of its value. This differs from pop() in that this returns the 
* del can be used to remove slices, clear entire list.


## Tuples and Sequences
* Common properties between lists and strings are **indexing, slicing**
* A tuple consist of a number of values separated by commas
* Tuples may be nested
* Tuples are immutable, but the can contain mutable objects eg lists

### Differences btween Lists and Tuples
* Tuple are immutable and usually contain heterogenous elements accessed via unpacking or indexing
* Lists are mutable and their elements are usually homogenous. Their elements are usually accessed by iterating over the list
* Tuple also has tuple packing and supports reverse operation.
* Sequence packing and unpacking requires that there are as many variables on the left hand side of the equals (=) as there are elements in the sequence on the right hand side.

