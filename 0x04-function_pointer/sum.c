/* header file needed for functions like printf */
#include <stdio.h>

/* function prototype */
int sum(int, int);

int main(void)
{
    int s = 0;
    
    int (*ptr)(int, int) = &sum;

    s = (*ptr)(2,3);

    printf("%d", s);
}

int sum(int a, int b)
{
    return a + b;
}