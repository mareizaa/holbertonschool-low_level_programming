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

	if (!key || *key == '\0')
	{
		return(0);
	}

	if (ht->array[index] != NULL)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);

		new_node->value = strdup(value);
		new_node->key = strdup(key);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		return (1);
	}
	else
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
}
