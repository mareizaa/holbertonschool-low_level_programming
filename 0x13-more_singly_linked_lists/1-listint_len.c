#include "lists.h"

/**
 * listint_len - Lenght linked listint_t list.
 * @h: Pointer struct
 * Return: Lenght h.
 */
size_t listint_len(const listint_t *h)
{
	int len;

	for (len = 0; h != NULL; len++)
	{
		h = h->next;
	}
	return (len);
}
