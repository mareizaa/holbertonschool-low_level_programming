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

	if (str == '\0')
	{
		return ('\0');
	}
	for (l = 0; str[l] != '\0'; l++)
	{
	}

	p = malloc((l + 1) * sizeof(char));
	if (p == '\0')
	{
		return ('\0');
	}
	for (r = 0; str[r] != '\0'; r++)
	{
		p[r] = str[r];
	}

	return (p);
	free(p);
}
