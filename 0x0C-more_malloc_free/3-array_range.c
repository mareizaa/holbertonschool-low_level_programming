#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create a string
 * @min: number minimum
 * @max: number maximum
 * Return: Pointer.
 */

int *array_range(int min, int max)
{
	int run;
	int *p;

	if (min > max)
	{
		return ('\0');
	}
	p = malloc((max - min + 1) * sizeof(int));
	if (p == '\0')
	{
		return ('\0');
	}
	for (run = 0; run <= max; run++)
	{
		p[run] = min++;
	}
	return (p);
}
