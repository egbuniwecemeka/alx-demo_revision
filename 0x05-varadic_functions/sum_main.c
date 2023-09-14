#include "stdio.h"
#include "varadic_functions.h"

/* 
    main - checks the code

    Return: 0 (Success)
 */

int main(void)
{
    int sum;

    sum = sum_all(2, 15, 98);
    printf("%d", sum);
    sum = sum_all(20, 980, 2000);
    printf("%d", sum);
    
    return (0);
}