#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size hash table
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table_new = NULL;

	table_new = malloc(sizeof(hash_table_t));
	if (!table_new)
		return (NULL);

	table_new->array = malloc(sizeof(hash_node_t *) * size);
	if (!table_new->array)
		return (NULL);

	return (table_new);
}
