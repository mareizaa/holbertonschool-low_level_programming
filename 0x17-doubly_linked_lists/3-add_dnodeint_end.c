#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at end of a list_t list
 * @head: Pointer struct
 * @n: Integer
 * Return: Pointer new Struct .
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newnode;
		newnode->n = n;
		newnode->prev = NULL;
		newnode->next = NULL;
		return (*head);
	}
	else
	{
		dlistint_t *aux = *head;

		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = newnode;
		newnode->n = n;
		newnode->prev = aux;
		newnode->next = NULL;
		return (newnode);
	}
}
