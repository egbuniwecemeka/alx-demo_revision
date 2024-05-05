#include <stdio.h>

/**
 *  main - checks the code
 *
 *  Return: 0 if successful
 */

int main(void)
{
    int num = 50;
    int *ptr;
    
    ptr = &num;

    printf("sizeof of int: %lu\n", sizeof(int));
    printf("sizeof of char: %lu\n", sizeof(char));
    printf("sizeof of float: %lu\n", sizeof(float));
    printf("sizeof of pointer: %lu\n", sizeof(ptr));

    return (0);
}