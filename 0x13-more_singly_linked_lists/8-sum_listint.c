#include "lists.h"

/**
 * sum_listint -  sum of all the data (n) of a listint_t linked list.
 * @head: pointer.
 * Return:  sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	listint_t *aux = head;
	int add = 0;

	while (aux->next != NULL)
	{
		if (aux == NULL)
		{
			return (0);
		}
		aux = aux->next;
		add = add + aux->n;
	}
	return (add);
}
