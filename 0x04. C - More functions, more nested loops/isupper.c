#include "f_nest2.h"

/**
 * 
 */

int main(void)
{
    char c;

    c = 'A';
    printf("%c = %d\n", c, _isupper(c));

    c = 'a';
    printf("%c = %d\n", c, _isupper(c));

    return (0);
}

int _isupper(char a)
{
    if (a >= 'A' && a <= 'Z')
        return (1);
    else
        return (0);
}