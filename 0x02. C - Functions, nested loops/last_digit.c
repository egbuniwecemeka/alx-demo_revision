#include "f_nest.h"

/**
 * 
 */

int main(void)
{
    itn r; 

    r = last_digit_print(100);
    putchar('0' + r);
    putchar('\n');

    last_digit_print(56);

    r = last_digit_print(95);
    printf("%d\n", r);
    
    return (0);
}

int last_digit_print(int i)
{
    int num;

    num = i % 10;

    while (num)
    {
        printf("%d\n", num);
        break;
    }

    return (num);
}