#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: Value associated
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int id = hash_djb2((const unsigned char *)key);
	unsigned long int index = id % ht->size;
	hash_node_t *new_node = ht->array[index];

	while (new_node != NULL)
	{
		if (!strcmp(new_node->key, key))
		{
			return (new_node->value);
		}
		new_node = new_node->next;
	}
	return (NULL);
}
