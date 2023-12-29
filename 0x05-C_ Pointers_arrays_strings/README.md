# 0x05. C - Pointers, arrays and strings

## Important things to note

* printf
%lu and sizeof(data_type) is used to print size of a data type
%p and & is used to print the memory address of a data type

Note: Remember that a pointer can only point to a variable of the type it is supposed to point to. The following example is incorrect:

char c;
int *ptr;

ptr = &c    //This is wrong because ptr is of type int and c is of type char.

Note that * has a different meaning depending on the context (declaring vs dereferencing pointers).

at declaration, it is used to declare a variable of type pointer to something. Example: int *n;
when used inside the code it is used to dereference pointers. Example*n = 98;

* Arrays
Arrays in C are contiguous memory areas that hold a number of values of the same type. Unlike some other languages, in C, all elements of an array have the same type.


