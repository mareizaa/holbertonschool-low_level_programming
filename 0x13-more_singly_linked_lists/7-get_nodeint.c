#include "lists.h"

/**
 * get_nodeint_at_index - Node index
 * @head: Double Pointer struct
 * @index: position.
 * Return: void.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux = head;

	if (head != NULL)
	{
		for (; index > 0; index--)
		{
			if (aux == NULL)
			{
				return (NULL);
			}
			aux = aux->next;
		}
		return (aux);
	}
	return (NULL);
}
