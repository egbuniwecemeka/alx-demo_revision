#include "li.h"

void add_node(list_t **head)
{
    list_t *new;

    new = malloc(sizeof(list_t));
    new->str = "Emma";
    new->length = 10;   /* new->length */
    /* pointer to h */
    new->next = *head;
    *head = new;
}


void print_li(list_t *head)
{
    while (head != NULL)
    {
        printf("string: [%s] and len: [%u]\n", head->str, head->length);
        head = head->next;
    }
    
}

int main(void)
{
    /* pointer to first element */
    list_t *head;

    head = NULL;

    /* Add Node */
    /* In other to add a node to head, head has to be modified therefore the reasson for its address(&)  */
    add_node(&head);
    add_node(&head);
    add_node(&head);
    print_li(head);

    return (0);
}