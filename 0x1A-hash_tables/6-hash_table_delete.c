#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table
 * Return: Value associated
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *aux = NULL;

	if (ht == NULL || ht->array == NULL)
		return;

	for (; index < ht->size; index++)
	{
		aux = ht->array[index];
		while (aux)
		{
			free(aux->key);
			free(aux->value);
			aux = aux->next;
			free(ht->array[index]);
			ht->array[index] = aux;
		}
		free(ht->array[index]);
	}
	free(ht->array);
	free(ht);
}
