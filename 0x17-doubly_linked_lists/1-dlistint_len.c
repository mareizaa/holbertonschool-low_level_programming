#include "lists.h"

/**
 * dlistint_len - Lenght linked list_t list.
 * @h: Pointer struct
 * Return: Lenght h.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len;

	for (len = 0; h != NULL; len++)
	{
		h = h->next;
	}
	return (len);
}
