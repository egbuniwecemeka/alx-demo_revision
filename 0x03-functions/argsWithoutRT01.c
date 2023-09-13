//Write a function that checks if a number is odd or even. Note: Use arguments without return type
#include <stdio.h>

void even_odd(int); //Function prototype

void main()
{
    even_odd(3);    //Function call
}

void even_odd(int n)    //Function definition
{
    if (n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}