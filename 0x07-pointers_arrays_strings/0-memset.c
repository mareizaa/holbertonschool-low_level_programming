#include "holberton.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: String
 * @b: constant byte
 * @n: lengh
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
		s[l] = b;
	return (s);
}
