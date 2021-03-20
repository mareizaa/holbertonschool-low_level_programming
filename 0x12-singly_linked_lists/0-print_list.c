#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: Pointer struct
 * Return: Lenght h.
 */
size_t print_list(const list_t *h)
{
	int len;

	for (len = 0; h != NULL; len++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
	}
	return (len);
}
