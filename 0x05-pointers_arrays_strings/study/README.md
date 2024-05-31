# POINTERS, ARRAYS AND STRINGS

## ARRAYS
An array can simply be defined as a collection of variables f the same type. Value of elements in array should match the data type of array
* Length of array(size) must be specified in array declaration. Once the siz of an array has been declared, it cannot be chnged.
* Arrays are used to store and manipulate same type of dat.
* Arrays are accessed via indexing
* In declaring arrays, always specify the array type and size of array(no of elements to store)


Syntax to Initialize an Array
* data_type array_name [size] = {value1, value2, value3, ...};
* Array elements can be initialized as object list, or initialized to zero
* If the size of array is more thn elements, free elements are initialized with zero

## POINTERS
Pointers are variables that hold the memory address of another variable.

There are two main types of pointers namely;
* Pointer
* Pointer to a pointer

Advantages of pointers
Pointers enable a function to return multiple vslues.
Pointers are useful in function calls, 

Note: It is good practice to assign a NUll value to pointers incase it does not point to a memory address.

To check for a null pointer, you can use an if statement as follows
if(ptr)     /* succeeds if p is not null */
if(!ptr)    /* succeeds if p is null */


## Pointer Arithmetic
Pointer arithmetic includes unary increment, decrement operations

## String
A string in C can be defined as a null-terminated sequence of char type values.

Note the length of the string does not contain the null ( '\0' ) character. eg. using strlen() to check the length of a string/array.
