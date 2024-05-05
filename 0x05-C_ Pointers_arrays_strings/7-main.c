#include "main.h"

/**
 * main - Checks the code
 * 
 * Return: Always 0
*/
int main(void)
{
    char *str;
    str = "0123456789";

    print_odd_str(str);
    printf("\n");
    return (0);
}


/*  */
void print_odd_str(char *str)
{
    int i;
    int len;
    int n;
    char *ptr = str;

    while (*ptr != '\0')
    {
        ptr++;
        len++;
    }
    n = (len - 1) / 2;

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            printf("%c", str[i]);
    }
    
    
}