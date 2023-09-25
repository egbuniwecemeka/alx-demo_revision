#include <stdio.h>

/**
 * It involves updating a value at a given index of an array
 * Algorithm
    Consider LA is a linear array with N elements and K is a positive integer such that K<=N. Following is the algorithm to update an element available at the Kth position of LA.
 */
int main(void)
{
    int update[] = {2, 4, 6, 8, 10};
    int k = 4, n = 5, item = 20;

    for (i = 0; i < n; i++)
    {
        printf("update[%d] = %d", i, update[i]);
    }

    update[k - 1] = item;

    for (i = 0; i < n; i++)
    {
        printf("update[%d] = %d", i, update[i]);
    }
    return (0);
    
}