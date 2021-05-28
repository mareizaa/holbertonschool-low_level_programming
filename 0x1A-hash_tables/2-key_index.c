#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 * @size: size hash table
 * @key: size hash table
 * Return: index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int id = hash_djb2(key);
	unsigned long int index = id % size;

	return (index);
}
