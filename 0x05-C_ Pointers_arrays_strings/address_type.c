#include <stdio.h>

/**
 * main - Prints the addresses and values of a variable type
 * 
 * Return: 0 if successful
*/

int main(void)
{
    char c;
    int n;
    int *ptr_n;

    n = 50;
    ptr_n = &n;

    printf(" Address of 'c': %p\n", &c);
    printf("Value of 'c': %c\n", c);
    printf("Address of 'n': %p\n", &n);
    printf("Value of 'n': %d\n", n);
    printf("Address of 'ptr_n': %p\n", &ptr_n);
    printf("Value of 'ptr_n': %p\n", ptr_n);


    return (0);
}