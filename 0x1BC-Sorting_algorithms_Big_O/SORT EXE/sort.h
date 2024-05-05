#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 * @n: The data/value of the list
 * @prev: Pointer to previous element of the lsit
 * @next: Pointer to next element of the list
*/
typedef struct listint_s
{
    int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* Function Prototype */
void print_array(const int array, size_t size);

#endif /* SORT_H */