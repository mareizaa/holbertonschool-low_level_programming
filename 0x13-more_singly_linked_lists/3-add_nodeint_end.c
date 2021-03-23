#include "lists.h"

/**
 * add_nodeint_end - adds a new node at end of a listint_t list
 * @head: Pointer struct
 * @n: integer
 * Return: Pointer new Struct .
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newnode;
		newnode->n = n;
		newnode->next = NULL;
		return (*head);
	}
	else
	{
		listint_t *aux = *head;

		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = newnode;
		newnode->n = n;
		newnode->next = NULL;
		return (aux);
	}
}
