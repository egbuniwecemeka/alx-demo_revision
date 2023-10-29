#include <stdio.h>

/* understanding the difference between bitwise and logical operators */

int main(void)
{
    int x = 1, y = 2;

    if (x&y)
        printf("The value of x&y is 1\n");
    
    if (x&&y)
        printf("The value of x&&y is 1\n")
    
    return (0);
}