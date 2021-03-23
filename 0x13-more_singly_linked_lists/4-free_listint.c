#include "lists.h"

/**
 * free_list - free struct
 * @head: Pointer struct
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
