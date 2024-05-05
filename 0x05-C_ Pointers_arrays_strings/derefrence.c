#include <stdio.h>

/**
 * main - Prints initial and derefrenced value of a variable type
 * 
 * Return: 0 on Success
*/
int main(void)
{
    int n;
    int *ptr;

    n = 2023;
    ptr = &n;

    printf("Address of 'n': %p\n", &n);
    printf("Value of 'n': %d\n", n);
    /* Derefrencing */
    *ptr = 2024;
    printf("Address of 'n': %p\n", &n);
    printf("Value of 'n': %d", n);

    return (0);
}
/* The above code works in the same way for other variable types */