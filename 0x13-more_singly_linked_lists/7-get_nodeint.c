#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to head
 * @index: index of node, starting at 0
 * Return: NULL if the node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int n = 0;
listint_t *n_node;

n_node = head;

while (n_node && n < index)
{
n_node = n_node->next;
n++;
}
if (n == index)
return (n_node);

return (NULL);
}
