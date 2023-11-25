#include "f_nest.h"

/**
 * main - entry point
 * 
 * Return: 0 if successful
*/

int main(void)
{
    print_lowercase();

    return (0);
}

void print_lowercase(void)
{
    char alpha;

    for (alpha = 'a'; alpha <= 'z'; alpha++)
    {
        putchar(alpha);
    }

    putchar('\n');    
}
