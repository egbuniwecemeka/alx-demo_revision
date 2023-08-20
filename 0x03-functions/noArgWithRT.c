#include <stdio.h>

int sum(void);  //Function declaration 

void main() //Function call
{
    int s;
    s = sum();
    //returns sum and stores it in a variable which is printed to stdout.
    printf("%d", s);
}

int sum()   //Function definition
{
    int a, b, sum = 0;
    a = 1;
    b = 2;
    sum = a + b;
    return (sum);
}
