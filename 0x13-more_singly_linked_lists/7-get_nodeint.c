#include "lists.h"

/**
 * get_nodeint_at_index - Node index
 * @head: Double Pointer struct
 * Return: void.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux;
	unsigned int num;

	if (head != NULL)
	{
		aux = head;
		for (num = 0; aux->next != NULL; num++)
		{
			aux = head->next;
			if (num == index)
			{
				return (aux->next);
			}
		}
	}
	return (NULL);
}
