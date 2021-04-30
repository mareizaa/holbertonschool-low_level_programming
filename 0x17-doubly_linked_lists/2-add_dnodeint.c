#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list_t list
 * @head: Pointer struct
 * @n: Integer
 * Return: Pointer new Struct .
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;

	if (*head != NULL)
		(*head)->prev = newnode;

	*head = newnode;
	return (newnode);
}
