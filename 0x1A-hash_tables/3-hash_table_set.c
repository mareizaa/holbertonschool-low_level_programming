#include "hash_tables.h"

/**
 * hash_table_set - creates a hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 successful
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int id = hash_djb2((const unsigned char *)key);
	unsigned long int index = id % ht->size;
	hash_node_t *new_node;

	if (ht->array[index] == NULL)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);

		new_node->value = strdup(value);
		new_node->key = strdup(key);
		new_node->next = NULL;
		ht->array[index] = new_node;
		return (1);
	}

	else
	{
		hash_node_t *aux = ht->array[index];

		while (aux != NULL)
		{
			if (!strcmp(aux->key, key))
			{
				ht->array[index]->value = strdup(value);
				return (1);
			}
			aux = aux->next;
		}

		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		return (1);
	}
	return (0);
}
