#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints/returns d sum of argv using argc
 * 
 * Return: sum of argv starting from index 1
 */

int main(int ac, char **av)
{
    int i;
    int sum = 0;
    printf("argc = %d\n", ac);

    for (i = 1; i < ac ; i++)
    {
        printf("argv[%d] = %s\n", i, av[i]);
        sum += atoi(av[i]);
    }
    printf("the sum is %d\n", sum);
    return (sum);
}