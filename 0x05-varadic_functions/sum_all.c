#include "varadic_functions.h"
#include <stdarg.h>

/* 
    sum_all - add
    @n: number of integers in function
    @...: no of varadic parameters 

    Return:if n ==0 - 0
        Otherwise - the sum of all parameters
 */

int sum_all(const int n, ...)
{
    va_list sm;
    unsigned int i, sum = 0;

    va_start(sm, n);

    for ( i = 0; i < n; i++)
    {
        sum += va_arg(sm, int);
    }
    
    va_end(sm);

    return (sum);
}
