# 0x05. C - Pointers, arrays and strings

## Important things to note

* The size of a type determines how many possible ways values can be stored in a variable.
  * if (a char == 1byte && 1byte == 8bits)
  * {int bin =2, int res; res = bin^8bits ; return res;}

  * if (an int == 4bytes && 1byte == 8bits)
  * {int bin =2, int res; res = bin^32bits ; return res;}

When we declare a variable, the computer assigns the right amount of memory in space(depending on its type), the space reservd for the variable is its address, and when a value is assigned to that variable, it is stored in its address.
**PS: A byte can only store numbers, for char it stores its corresponding ascii values**

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

* Pointer
A pointer is the address of a piece of data stored in memory. A pointer variable, is a variable whose address stores a piece of data in memory.
Note: A pointer is like every other variable, therefore, the computer assigns space also to it. A pointer variable is 8bytes(64-bit machines).
Note: * was a different meaning depending of its context(ie declaration and derefrenceing)
  * At definition/declaration, it declares a pointer
  * At derefrencing, it update the value of a pointer

* Derefrencing
This is the manipulation of values stored in the memory address of a pointer.

* Function parameters are passed as values
Since the values of pointers are addresses, it is possible to modify the value of a variable from outside the function it is declared using a pointer

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

Prototype: void swap_int(int *a, int*b);

2. This report, by its very length, defends itself against the risk of being read
mandatory
Score: 100.0% (Checks completed: 100.0%)
Write a function that returns the length of a string.

Prototype: int _strlen(char *s);
FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.
