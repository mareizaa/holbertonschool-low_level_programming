#include "lists.h"

/**
 * pop_listint - delete head
 * @head: Double Pointer struct
 * Return: void.
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int num;

	while (head != NULL && *head != NULL)
	{
		aux = (*head)->next;
		num = (*head)->n;
		free(*head);
		*head = aux;

		return (num);
	}
	return (0);
}
