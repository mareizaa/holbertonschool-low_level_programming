#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - array type char
 * @s1: - pointer
 * @s2: - pointer two
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int ls1, ls2, s1s2, c1, c2;

	if (s1 == '\0')
	{
		s1 = "":
	}
	if (s2 == '\0')
	{
		s2 = "":
	}
	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
	{
	}
	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
	{
	}
	s1s2 = (ls1 + ls2 + 1);
	p = malloc(s1s2 * sizeof(char));
	if (p == '\0')
	{
		return (0);
	}
	for (c1 = 0; s1[c1] != '\0'; c1++)
	{
		p[c1] = s1[c1];
	}
	for (c2 = 0; s2[c2] != '\0'; c2++, ls1++)
	{
		p[ls1] = s2[c2];
	}
	return (p);
}
