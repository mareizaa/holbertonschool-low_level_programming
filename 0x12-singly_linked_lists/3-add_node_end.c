#include "lists.h"

/**
 * add_node_end - adds a new node at end of a list_t list
 * @head: Pointer struct
 * @str: string
 * Return: Pointer new Struct .
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int len;

	for (len = 0; str[len] != '\0'; len++)
	{}

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newnode;
		newnode->str = strdup(str);
		newnode->len = len;
		newnode->next = NULL;
		return (*head);
	}
	else
	{
		list_t *aux = *head;

		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = newnode;
		newnode->str = strdup(str);
		newnode->len = len;
		newnode->next = NULL;
		return (aux);
	}
}
