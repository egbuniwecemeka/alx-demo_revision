#include <stdio.h>

/*
*   main - prints the alphabets in reverse
*/

int main(void)
{
    char c;

    for(c = 'Z'; c >= 'A'; c--)
        printf("%c", c);

    return (0);
}