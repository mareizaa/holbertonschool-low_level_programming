#include "lists.h"

/**
 * delete_nodeint_at_index - adds a new node
 * @head: Pointer struct
 * @index: index
 * Return: Pointer new Struct .
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux = *head;
	listint_t *newnode;
	unsigned int run;

	if (aux == NULL)
		return (-1);

	if (index == 0)
	{	*head = (*head)->next;
		free(aux);
		return (1);
	}
	for (run = 0; run < (index - 1); run++)
	{
		if (aux->next == NULL)
		{
			return (-1);
		}
		aux = aux->next;
	}
	newnode = aux->next;
	aux->next = newnode->next;
	free(newnode);
	return (1);
}
