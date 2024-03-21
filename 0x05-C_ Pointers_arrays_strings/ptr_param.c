#include <stdio.h>

/**
 * modify_func - Modifies a value from outside its function using parameter value
 * 
 * Return: nothing
 */
void modify_func(int m)
{
    m = 3500;
}

/**
 * main - Entry point
 * 
 * Return: 0 on success
*/
int main(void)
{
    int n;
    n = 350000;

    printf("Value of 'n': %d\n", n);
    /* When modify_func is called, before line m=3500 is executed, n=98 is copied into m which is in the external function */
    modify_func(n);
    /* After m=3500 execution, m(3500) & n(350000). Although on exiting modify_func,
    * variable(m) is destroyed and its value stays in memory until this space is used by program/machine for another variable */
    printf("Value of 'n': %d", n);
    return (0);
}