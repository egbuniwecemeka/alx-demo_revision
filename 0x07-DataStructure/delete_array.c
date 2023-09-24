#include <stdio.h>
/**
 * Deletion Operation
In this array operation, we delete an element from the particular index of an array. This deletion operation takes place as we assign the value in the consequent index to the current index.

Algorithm
Consider LA is a linear array with N elements and K is a positive integer such that K<=N. Following is the algorithm to delete an element available at the Kth position of LA.

1. Start
2. Set i = K
3. Repeat steps 4 and 5 while i < N
4. Set DEL[i] = DEL[i + 1]
5. Set i = i+1
6. Set N = N-1
7. Stop
 */
int main()
{
    int DEL[] = {2, 4, 6};
    int n = 3
    int i;

    /* Before deletion */
    for (i = 0; i < n; i++)
        printf("DEL[%d] = %d", i, DEL[i]);
    
    /* Delete an element */
    for ( i = 1; i < n; i++)
    {
        /* overwrites i with i + 1 */
        DEL[i] = DEL[i + 1];
        /* reduced size after each iteration to reflect reduced size of array*/
        n = n - 1;
    }

    /* After deleteing */
    for (i = 0; i < n - 1; i++)
        printf("DEL[%d] = %d", i, DEL[i]);
    
    return (0);
    
}