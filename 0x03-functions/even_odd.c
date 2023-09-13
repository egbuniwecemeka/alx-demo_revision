//Example of a function with arguments but no return type
#include <stdio.h>

void even_odd(int n);   //Function declaration

void main() //Function call
{
    even_odd(3);
}

void even_odd(int n)    //Function definition
{
    if (n % 2 == 0)
        printf("Number is even");
    else
        printf("Number is odd");
}