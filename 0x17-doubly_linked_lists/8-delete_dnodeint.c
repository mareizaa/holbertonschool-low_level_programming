#include "lists.h"

/**
 * delete_dnodeint_at_index - adds a new node
 * @head: Pointer struct
 * @index: index
 * Return: Pointer new Struct .
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head, *before, *after;
	unsigned int i = 0;

	if (!aux)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(aux);
		return (1);
	}
	while (i++ < index)
	{
		if (!aux)
			return (-1);
		aux = aux->next;
	}
	after = aux->next;
	before = aux->prev;
	after->prev = before;
	before->next = after;
	free(aux);
	return (1);
}
