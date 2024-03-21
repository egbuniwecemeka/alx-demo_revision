#include "sort.h"

/**
 * print_list - Prints elements in a list
 * @list: List to be printed
*/
void print_list(const listint_t *list)
{
    size_t i;
    i = 0;

    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}