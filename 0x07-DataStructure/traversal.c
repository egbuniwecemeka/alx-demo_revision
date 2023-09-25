#include <stdio.h>

/**
 * Alogrithm 
    1 Start
    2. Initialize an Array of certain size and datatype.
    3. Initialize another variable ‘i’ with 0.
    4. Print the ith value in the array and increment i.
    5. Repeat Step 4 until the end of the array is reached.
    6. End
 */
int main(void)
{
    int traverse[] = {2, 4, 6, 8, 10;}
    int n = 5, i;

    for (i = 0; i < n; i++)
    {
        printf("traverse[%d] = %d", i, traverse[i]);
    }
    return (0);
}