#include "lists.h"

/**
 * free_dlistint - free struct
 * @head: Pointer struct
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
