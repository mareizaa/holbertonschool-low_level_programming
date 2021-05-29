#include "hash_tables.h"

/**
 * hash_table_print - retrieves a value associated with a key
 * @ht: hash table
 * Return: Value associated
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;

	if (ht == NULL)
		printf("{}");

	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			printf("%s: ", ht->array[index]->key);
			printf("%s, ", ht->array[index]->value);
		}
		index++;
	}
	printf("\n");
}
