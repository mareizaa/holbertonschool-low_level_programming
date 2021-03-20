#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: Pointer struct
 * @str: string
 * Return: Pointer new Struct .
 */
list_t *add_node(list_t **head, const char *str)
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
	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
