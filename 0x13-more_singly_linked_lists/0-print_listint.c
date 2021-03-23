#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: Pointer struct
 * Return: Lenght h.
 */
size_t print_listint(const listint_t *h)
{
	int len;

	if (h == '\0')
	{
		return ('\0');
	}

	for (len = 0; h != NULL; len++)
	{
		printf("%d\n", h->n);
		h = h->next;

	}
	return (len);
}
