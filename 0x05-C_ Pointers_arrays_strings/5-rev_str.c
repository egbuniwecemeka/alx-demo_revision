#include "main.h"

/**
 * rev_string - reverses and prints an input string
 * @s: pointer to input string
 * 
 * Return: void
 */

void rev_string(char *s)
{
    /** char var initialized with first character of input string,
     * temporal variable for swapping charactes during reversal process 
    */
    char rev = s[0];

    /* To store length of input string */
    int len = 0;

    /* To iterate the loop */
    int i;

    /** To calculate length of string by incrementing length unitl it gets to the 
     * null-terminating byte 
     */

    while (s[len] != '\0')
        len++;

    /* Iterates the string/loop counter */
    for (i = 0; i < len; i++)
    {
        /** loop checks if i < len -1, then
         * decrements the length, starting from EOS, which is used to reverse characters.
        */
       len--;

       /* temporarily stores/assigns the current value at i to rev */
       rev = s[i];
       /* character at index i is replaced with character at corresponding length from the EOS */
       s[i] = s[len];
       /* Character at end of string(position determined by len) is replaced with temporarily stored character rev  */
       s[len] = rev;
    }    
}

/* In summary, the rev_string function, reverses an input string by swapping the characters at the beginning and end of the string using a temporal rev variable */