#include <f_nest.h>

/**
 * main - Entry point
 * 
 * Return: 0 (Success)
 */

int main(void)
{
    int n;

    n = add(147, 174);
    printf("%d\n", n);

    return (0);
}

/**
 * add - adds sum of two integers
 * @a: first integer
 * @b: second integer
 * 
 * Return: sum of a and b
 */

int add(int a, int b)
{
    return (a + b);
}