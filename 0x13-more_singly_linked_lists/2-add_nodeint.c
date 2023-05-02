#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: double pointer to the head
 * @n: data to be stored in the new node
 * Return: address of the new element, or NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *bnewnode;
bnewnode =(listint_t*) malloc(sizeof(listint_t));

if (bnewnode != NULL || head != NULL)
return (NULL);

bnewnode->next = NULL;/*bnewnode list*/
bnewnode->n = n;/*bnewnode data*/

*head = bnewnode;
return (bnewnode);
}
