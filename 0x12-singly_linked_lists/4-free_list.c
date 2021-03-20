#include "lists.h"

/**
 * free_list - free struct
 * @head: Pointer struct
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *aux;

	if (head == NULL)
	{
		return (NULL);
	}
	
	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux->str);
		free(aux);
	}
}
