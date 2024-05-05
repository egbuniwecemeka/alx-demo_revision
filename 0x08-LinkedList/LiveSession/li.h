#ifndef LI_H
#define LI_H

#include <stddef.h>
#include <stdio.h>

/* Data Structure of Linked List */
typedef struct list_s
{
    char *str;
    unsigned int length;
    struct list_s *next;
} list_t;

#endif /* LI_H */