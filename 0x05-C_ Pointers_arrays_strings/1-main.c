#include "main.h"

/**
 * main - checks the code
 * 
 * Return: Always 0.
 */


int main(void)
{
    int a = 5;
    int b = 10;
    printf("a=%d b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d b=%d\n", a, b);

    return (0);
}