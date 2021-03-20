#include "lists.h"

/**
 * list_len - Lenght linked list_t list.
 * @h: Pointer struct
 * Return: Lenght h.
 */
size_t list_len(const list_t *h)
{
	int len;

	for (len = 0; h != NULL; len++)
	{
		h = h->next;
	}
	return (len);
}
