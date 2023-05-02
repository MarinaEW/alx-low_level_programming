#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to head
 * Return: 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
listint_t *dmain_head;
int n;

dmain_head = *head;

if (*head == NULL)
{
return (0);
}

n = (*head)->n;
dmain_head = (*head)->next;
free(*head);
*head = dmain_head;
return (n);
}
