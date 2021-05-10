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
	dlistint_t *aux = *h, *newnode, *tmp = *h;
	unsigned int i = 0, len;

	if (!h)
		return (NULL);
	for (len = 0; tmp != NULL; len++)
		tmp = tmp->next;
	if (idx > len - 1)
		return (NULL);	
	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	if (idx == len)
	{	newnode->next = NULL;
		newnode->prev = tmp;
		tmp->next = newnode;
	}
	if (*h == NULL)
	{	newnode->next = NULL;
		newnode->prev = NULL;
		*h = newnode;
		return (newnode);
	}
	if (idx == 0)
	{	newnode->next = aux;
		newnode->prev = NULL;
		*h = newnode;
		return (newnode);
	}
	while (i++ < idx)
	{
		if (!aux)
			return (NULL);
		aux = aux->next;
	}
	newnode->prev = aux->prev;
	newnode->next = aux;
	aux->prev = newnode;
	newnode->prev->next = newnode;
	return (newnode);
}
