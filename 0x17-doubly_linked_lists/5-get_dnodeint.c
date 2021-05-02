#include "lists.h"

/**
 * get_dnodeint_at_index - Node index
 * @head: Double Pointer struct
 * @index: position.
 * Return: void.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = head;
	unsigned int i = 0;

	if (!head)
	{
		return (NULL);
	}
	while (i < index)
	{
		if (aux)
		{
			aux = aux->next;
		}
		else
		{
			return (NULL);
		}
		i++;
	}
	return (aux);
}
