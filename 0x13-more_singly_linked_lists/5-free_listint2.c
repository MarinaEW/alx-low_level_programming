#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: double pointer
 */

void free_listint2(listint_t **head)
{
listint_t *dnode, *tmp;
if (!head)
return;

dnode = *head;
while (dnode)
{
tmp = dnode;
dnode = dnode->next;
free(dnode);
}
*head = NULL;
}
