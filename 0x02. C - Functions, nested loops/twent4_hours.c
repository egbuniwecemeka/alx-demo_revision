#include "f_nest.h"

/**
 * 
 */

int main(void)
{
    twent4_hours(void);

    return (0);
}

void twenty4_hours(void)
{
    int i, j;

    for (i = 0; i < 24; i++)
    {
        for (j = 0; j < 59; j++)
            printf("%02d:%02d\n");
        printf("%02d:%02d\n", i, j);
    }
}