#include "main.h"

void print_even_str(char *str)
{
    int len = 0;
    int len_ind = 0;
    int i;
    char *ptr;

    while (*ptr != '\0')
    {
        ptr++;
        len++;
    }

    len_ind = len - 1;

    for (i = 0; i < len_ind; i++)
    {
        if (i % 2 == 0)
            printf("%c", str[i]);
    }   
    
}