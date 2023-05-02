#include "lists.h"

/**
 * sum_listint - returns sum of all the data(n)
 * @head: pointer to head
 * Return: 0 if list is empty
 */

int sum_listint(listint_t *head)
{
int nadd = 0;

while (head)
{
nadd += head->n;
head = head->next;
}
return (nadd);
}
