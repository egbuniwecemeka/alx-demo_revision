#include "f_nest2.h"

/**
 * main - Entry point
 * 
 * Return: 0 (Exit Success)
 */

int main(void)
{
    fizz_buzz(void);
    return (0);
}

void fizz_buzz()
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)    /* checked first so as to maintain logical order */
            printf("FizzBuzz");
        else if (i % 3 = 0)
            printf("Fizz ");
        else if (1 % 5 = 0)
            printf("Buzz ");
        else
            printf("%d ", i);
    }
}