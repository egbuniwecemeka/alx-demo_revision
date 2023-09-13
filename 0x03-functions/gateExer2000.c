#include <stdio.h>

int inc(int i)
{
    static int count = 0;
    count = count + i;
    return count;
}

int main(void)
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        j = inc(i);
    }
    printf("%d", j)
}

//Explain the flow of the above code and what will be the final output of j?