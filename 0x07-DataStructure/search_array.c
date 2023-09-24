#include <stdio.h>

/**
 * Search elements in an array using keys. The key compares every value in the array to see if it is present or not
 */
int main(void)
{
    int SEARCH[i] = {1,2,3,4,5};
    int arr_val = 4, n = 5, i;

    for (i = 0; i < n; i++)
        printf("SEARCH[%d] = %d", i, SEARCH[i]);

    for (i = 0; i < n; i++)
    {
        if (SEARCH[i] == arr_val)
        {
            printf("Found %d at index %d", i, i + 1)    //+1 to reflect the index in normal counting from 1
        }
    }
    return (0);        
}