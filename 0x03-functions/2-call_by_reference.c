#include <stdio.h>

void sum(int *, int *);

void main ()
{
    int x = 5, y = 7;

    sum(&x, &y);
    printf("calling function\n")
    printf("%d %d\n", x, y);
}

void sum(int *a, int *b)
{
    int sum = 0;
    *a = 1, *b = 2;
    sum = *a + *b
    printf("called function\n")
    printf("%d\n", sum);
}
//Output: value of calling function will be updated to value of called function.

/* Call by Reference:
In call by reference, a reference or memory address of the actual argument is passed to the function. This means that any changes made to the parameter inside the function are reflected in the original value outside the function.

Advantages:

Efficient for large data structures since no copying is involved.
Can directly modify the original data.
Disadvantages:

Can lead to unintended side effects and make code harder to understand and debug.


"Call by value" and "call by reference" are two different ways of passing arguments to functions in programming languages, and they determine how changes to the arguments inside the function affect the original values outside the function. Let's break down the differences between the two:

Call by Value:
In call by value, a copy of the actual argument's value is passed to the function. The function operates on this copy, and any changes made to the parameter inside the function do not affect the original value outside the function.

Advantages:

The original value remains unchanged, preserving data integrity.
It is relatively straightforward and easy to reason about.
Disadvantages:

For large data structures, copying the entire value can be inefficient in terms of memory and performance.
Example (in a hypothetical programming language):

python
Copy code
def modify_value(x):
    x = x + 1

value = 10
modify_value(value)
print(value)  # Output: 10 (unchanged)
Call by Reference:
In call by reference, a reference or memory address of the actual argument is passed to the function. This means that any changes made to the parameter inside the function are reflected in the original value outside the function.

Advantages:

Efficient for large data structures since no copying is involved.
Can directly modify the original data.
Disadvantages:

Can lead to unintended side effects and make code harder to understand and debug.
Example (in a hypothetical programming language):

python
Copy code
def modify_reference(lst):
    lst.append(42)

my_list = [1, 2, 3]
modify_reference(my_list)
print(my_list)  # Output: [1, 2, 3, 42] (modified)
It's important to note that the terms "call by value" and "call by reference" can be used differently in various programming languages and contexts. Some languages, like C and C++, provide mechanisms for true call by reference (using pointers), while others, like Java and Python, have more complex behavior involving references or copies of references. The distinction between these two concepts is crucial for understanding how data is passed and manipulated in functions.
 */