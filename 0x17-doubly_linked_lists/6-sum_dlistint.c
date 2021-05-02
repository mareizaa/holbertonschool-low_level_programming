#include "lists.h"

/**
 * sum_dlistint -  sum of all the data (n) of a listint_t linked list.
 * @head: pointer.
 * Return:  sum of all the data (n).
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (aux)
	{
		sum += aux->n;
		aux = aux->next;
	}
	return (sum);
}
