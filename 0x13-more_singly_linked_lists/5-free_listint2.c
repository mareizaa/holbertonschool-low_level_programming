#include "lists.h"

/**
 * free_listint2 - free struct
 * @head: Double Pointer struct
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	while (head && *head)
	{
		aux = *head;
		aux = (*head)->next;
		free(aux);
	}
	*head = NULL;
}
