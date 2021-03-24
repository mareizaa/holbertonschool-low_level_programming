#include "lists.h"

/**
 * pop_listint - delete head
 * @head: Double Pointer struct
 * Return: void.
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;

	while (head != NULL && *head != NULL)
	{
		aux = (*head)->next;
		aux->n = (*head)->n;
		free(*head);
		*head = aux;

		return (aux->n);
	}
	return (0);
}
