#include<stdio.h>

int main(void) {
    diagonal_line(4);
    diagonal_line(-4);
    diagonal_line(6);
    diagonal_line(0);
    return 0;
}

void diagonal_line(int n)
{
    int i, j;
    if (n > 0)
    {
        for (i = 0; i <= n; i++)
        {
            for (j = 0; j < i; j++)
            {
                putchar(' ');
            }
            putchar('\\');
            putchar('\n');
        } 
    }
    else
        putchar('\n');
}