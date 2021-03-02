#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - array type char
 * @size: - long
 * @c: - char specific
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int r;

	p = (char*)malloc(size*sizeof(char));
	if (p == '\0')
	{
		return ('\0');
	}
	for (r = 0; r < size; r++)
	{
		p[r] = c;
	}
	return (p);
}