#include <stdio.h>

void sum(float, int);   //Function declaration

void main()
{
    sum(6, 9);  //Function call with arguments
}

//Function definition with arguments but no return type.
void sum(float a, int b)
{
    int sum = 0;
    sum = a + b;
    printf("%d", sum);
}   //curly braces act as the return statement in the function definition

//Output -> 15