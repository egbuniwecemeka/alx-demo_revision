/* header file needed for functions like printf */
#include <stdio.h>

/* function prototype */
int sum(int, int);

/* entry point */
int main(void)
{
    /* s declared  and initialized to 0 */
    int s = 0;

    /* fnction pointer initialized with the address of sum function */
    int (*ptr)(int, int) = &sum;

    /* ptr points to sum functio &assigns its value to s */
    s = (*ptr)(2,3);

    /* prints output */
    printf("%d", s);
}

/* function definition */
int sum(int a, int b)
{
    return a + b;
}