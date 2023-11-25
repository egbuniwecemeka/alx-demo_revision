#include "f_nest.h"

int main(void)
{
    int r;

    r = only_lowercase('E');
    putchar(r + '0'); /* r + '0' is used to convert the integer value r into its corresponding ASCII character representation. */

    r = only_lowercase('m');
    putchar(r + '0');

    r = only_lowercase(121);
    printf("%c\n", r + '0'); /* This can also be achieved using printf */

}

int only_lowercase(int c)
{
    if (c >= 97 && c <= 122)    /* ASCII value of all lowercases 97-122 */
        return (1);
    
    return (0);    
}