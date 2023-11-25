#include <stdio.h>
#include <string.h>


void mystr_tok(char *str, const char delim)
{
    int len = strlen(str);
    char words[len + 1]
    int i, j;

    for (i = 0; i <= len; i++)
    {
        j = 0;
        if (str[i] == delim || str[i] == '\0')
        {
            words[j] = '\0';
            j = 0;
        }
        
        if (j > 0)
        {
            printf("%s\n", words);
            j = 0;
        }
        else
        {
            words[j] = str[i];
            j++;
        }
        
    }
    
}