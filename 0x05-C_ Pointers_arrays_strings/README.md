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

Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What are pointers and how to use them
What are arrays and how to use them
What are the differences between pointers and arrays
How to use strings and how to manipulate them
Scope of variables

Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
You are allowed to use _putchar
You don’t have to push (_putchar.c), we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
Don’t forget to push your header file

Tasks
0. 98 Battery st.
mandatory
Score: 100.0% (Checks completed: 100.0%)
Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

Prototype: void reset_to_98(int *n);


1. Don't swap horses in crossing a stream
mandatory
Score: 100.0% (Checks completed: 100.0%)
Write a function that swaps the values of two integers.

Prototype: void swap_int(int *a, int *b);
