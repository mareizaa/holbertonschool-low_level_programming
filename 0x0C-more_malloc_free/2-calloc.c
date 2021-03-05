#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory whit malloc
 * @nmemb: number of  elements
 * @size: size in bytes
 * Return: Pointer.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int run;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return ('\0');
	}
	p = malloc(nmemb * size);
	if (p == '\0')
	{
		exit('\0');
	}
	for (run = 0; run < nmemb; run++)
	{
		p[run] = 0;
	}
	return (p);
}
