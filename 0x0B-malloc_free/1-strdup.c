#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - array type char
 * @str: - pointer
 * Return: pointer.
 */

char *_strdup(char *str)
{
	char *p;
	int l, r;

	for (l = 0; str[l] != '\0'; l++)
	{
	}

	p = malloc((l + 1) * sizeof(char));

	for (r = 0; r < l; r++)
	{
		p[r] = str[r];
	}
	if (str == '\0')
	{
		return ('\0');
	}
	if (p == '\0')
	{
		return ('\0');
	}
	return (p);
	free(p);
}
