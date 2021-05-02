#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a new node
 * @h: Pointer struct
 * @n: integer
 * @idx: index
 * Return: Pointer new Struct .
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux = *h, *newnode, *tmp;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	if (*h == NULL || idx == 0)
	{
		newnode->n = n;
		newnode->next = aux->next;
		newnode->prev = aux->prev;
		*h = newnode;
		return (newnode);
	}
	while (i < idx)
	{
		if (!aux)
			return (NULL);
		aux = aux->next;
		i++;
	}
	newnode->n = n;
	newnode->prev = aux->prev;
	newnode->next = aux;
	aux->prev = newnode;
	tmp = newnode->prev;
	tmp->next = newnode;
	return (newnode);
}
