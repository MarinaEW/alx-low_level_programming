#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: double pointer
 */

void free_listint2(listint_t **head)
{
listint_t *dnode, *temp;

dnode = *head;

while (dnode != 0)
{
temp = dnode;
dnode = dnode->next;
free(temp);
}

*head = NULL;
}
