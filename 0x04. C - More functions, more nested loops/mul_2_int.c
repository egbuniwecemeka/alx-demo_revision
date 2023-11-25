#include "f_nest2.h"

/**
 * main - Entry point
 * 
 * Return - product of two integers
 */

int main(void)
{
    printf("%d", mul(45, 6));
    return (0);
}

int mul(int a, int b)
{
    int res;

    res = a * b;

    return (res);
}
