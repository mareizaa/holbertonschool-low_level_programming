#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: Pointer struct
 * @n: Integer
 * Return: Pointer new Struct .
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
