#include "f_nest.h"

int main(void)
{
    int r;

    r = lower_uppercase('E');
    putchar(r + '0'); /* r + '0' is used to convert the integer value r into its corresponding ASCII character representation. Note: ASCII value of 0 is 48 */

    r = lower_uppercase('m');
    putchar(r + '0');

    r = lower_uppercase(121);
    printf("%c\n", r + '0'); /* This can also be achieved using printf */

}

int lower_uppercase(int c)
{
    if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))    /* ASCII value of all lowercases 97-122 */
        return (1);
    
    return (0);    
}