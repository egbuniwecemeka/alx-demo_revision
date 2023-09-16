#include <stdarg.h>

/* 
    printargs - prints all positive args until a negative arg is seen

 */

void printargs(int arg, ...)
{
    va_list li;
    int i;

    va_start(li, arg);

    for(i = arg; i >= 0; i = va_arg(li, int))
        printf("%d", i);
    va_end(li);
    putchar('\n');
}

int main(void)
{
    printargs(2, 5, 45, -3, 17);
    printargs(2, -8, 34);
    return (0);
}