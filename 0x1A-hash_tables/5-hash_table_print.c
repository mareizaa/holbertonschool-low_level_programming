#include "hash_tables.h"

/**
 * hash_table_print - retrieves a value associated with a key
 * @ht: hash table
 * Return: Value associated
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0, sum = 0;
	hash_node_t *aux = NULL;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
	

	printf("{");
	for (; index < ht->size; index++)
	{
		aux = ht->array[index];
		while (aux)
		{
			if (sum > 0)
				printf(", ");
			printf("'%s': ", aux->key);
			printf("'%s'", aux->value);
			sum++;
			aux = aux->next;
		}
	}
	printf("}");
	printf("\n");
}
