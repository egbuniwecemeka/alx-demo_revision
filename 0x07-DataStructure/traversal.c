#include <stdio.h>

/*  */
int main(void)
{
    int traverse[] = {2, 4, 6, 8, 10;}
    int n = 5, i;

    for (i = 0; i < n; i++)
    {
        printf("traverse[%d] = %d", i, traverse[i]);
    }
    return (0);
}