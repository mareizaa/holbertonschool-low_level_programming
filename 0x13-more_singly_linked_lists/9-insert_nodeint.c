#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node
 * @head: Pointer struct
 * @n: integer
 * @idx: index
 * Return: Pointer new Struct .
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *aux = *head;
	unsigned int run = 0;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		newnode->next = *head;
		newnode->n = n;
		*head = newnode;
		return (newnode);
	}
	if (idx == 0)
	{	newnode->next = *head;
		newnode->n = n;
		*head = newnode;
		return (newnode);
	}
	while (aux)
	{
		if ((idx - 1) == run)
		{
			newnode->next = aux->next;
			newnode->n = n;
			aux->next = newnode;
			return (newnode);
		}
		aux = aux->next;
		if (aux == NULL)
			return (NULL);
		run++;
	}
	return (0);
}
