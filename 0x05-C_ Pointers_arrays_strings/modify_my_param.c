#include <stdio.h>

/**
 * modify_my_param -set the parameter 
 * @m: pointer to the value to update
 * 
 * Return: void
*/

void modify_my_param(int *m)
{
    printf("Value of m: %d\n", m);
    printf("Address of m: %p\n", m);

    *m = 402;
}

/**
 * main - changes the value of a variable from
 * outside the funtion it is declared in
 * 
 * Return: Always 0
*/
int main(void)
{
    int n;
    int *p;

    p = &n;
    n = 98;

    printf("Value of n before call: %d\n", n);
    printf("Address of n: %p\n", n);
    printf("Value of p: %p\n", p);
    printf("Address of p: %p\n", p);
    modify_my_param(n);
    printf("Value of n after call: %d\n", n);
    return (0);
}