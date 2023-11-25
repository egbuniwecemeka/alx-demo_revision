#include <f_nest2.h>

/**
 * main - Entry point
 * 
 * Return: 0 (Success)
 */

int main(void)
{
    char c;

    c = '0';
    printf("%c = %d\n", c, _isdigit(c));

    c = 'a';
    printf("%c = %d\n", c, _isdigit(c));

    return (0);
}

int _isdigit(int d)
{
    if (d >= 48 && d <= 57)
        return (1);
    else
        return (0);
}