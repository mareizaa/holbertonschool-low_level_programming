#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - allocates memory whit malloc
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: Pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int c, c1;
	char *p;
	unsigned int con, c2;

	if (s1 == '\0')
	{
		s1 = "";
	}
	if (s2 == '\0')
	{
		s2 = "";
	}
	for (c = 0; s1[c] != '\0' ; c++)
	{}
	for (con = 0; s2[con] != '\0' ; con++)
	{}
	if (n >= con)
	{
		p = malloc((c + con + 1) * sizeof(char));
		if (p == NULL)
			return (NULL);
		for (c1 = 0; s1[c1] != '\0'; c1++)
			p[c1] = s1[c1];
		for (c2 = 0; s2[c2] != '\0'; c2++, c1++)
			p[c1] = s2[c2];
	}
	else if (n < con)
	{
		p = malloc((c + n + 1) * sizeof(char));
		if (p == NULL)
		{
			return (NULL);
		}
		for (c1 = 0; s1[c1] != '\0'; c1++)
			p[c1] = s1[c1];
		for (c2 = 0; c2 < n; c2++, c1++)
			p[c1] = s2[c2];
	}
	return (p);
}
