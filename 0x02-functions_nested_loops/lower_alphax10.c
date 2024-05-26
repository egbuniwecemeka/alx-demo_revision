#include "f_nest.h"

int main(void)
{
    print_lowecasex10();

    return (0);
}

void print_lowercasex10()
{
    char alpha;
    int i;

    for (i = 0; i <= 9; i++)
    {
        for (alpha = 'a'; alpha <= 'z'; alpha++)
        {
            putchar(alpha);
        }
        putchar('\n');
    }
}