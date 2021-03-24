#include "lists.h"

/**
 * free_listint2 - free struct
 * @head: Double Pointer struct
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	while (head != NULL && *head != NULL)
	{
		aux = (*head)->next;
		free(*head);
		*head = aux;
	}
}
