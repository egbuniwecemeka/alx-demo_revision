#include <stdio.h>
int workExp(int x, int y)
{
    x = 2 * x + y;
    return x;
}

int main()
{
    int x = 2, y = 5;
    y = workExp(y,x);
    x = workExp(y, x);
    printf("%d", x);
    return 0;
} 
//Final output is 26 