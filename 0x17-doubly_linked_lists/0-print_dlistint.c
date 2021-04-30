#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list_t list.
 * @h: Pointer struct
 * Return: Lenght h.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int len;

	for (len = 0; h != NULL; len++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (len);
}
