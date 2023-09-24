#include <stdio.h>
/**
 * Array is a type of linear data structure that is defined as a collection of elements with same or different data types.
 * array index - for labelling elements in an array
 * memory address - free address of starting element
 * Element - item or data stored in an array
 * 
 * Need for Arrays
 * The answer lies in the random access lookup time.
 * Arrays provide O(1) random access lookup time. That means, accessing the 1st index of the array and the 1000th index of the array will both take the same time. This is due to the fact that array comes with a pointer and an offset value. The pointer points to the right location of the memory and the offset value shows how far to look in the said memory
 * 
 * Array Representation
 * In a one dimensional array
 * n-1  - where n = size
 * 
 * Multidimensional Array
 * ie array_name[m][n]  where m and n are the sizes at both levels
 */

/**
 *  Basic Operartions of Arrays 
 * 
 *  Traversing
 *  Insertion
 *  Deletion
 *  Searching
 *  Updating
 *  Displaying
 * */

/* Insertion operation
    Involes inserting
 */

int main()
{
    int INS[5], i;

    printf("Array before insertion\n");

    for (i = 0; i < 5; i++)
        printf("INS[%d] = %d", i, INS[i]);
    
    printf("Array after insertion\n");
    for (i = 0; i < 5; i++)
    {
        printf("Inserting elements\n");
        INS[i] = i + 2;
        printf("INS[%d] = %d", i, INS[i]);
    }

    return (0);
}



