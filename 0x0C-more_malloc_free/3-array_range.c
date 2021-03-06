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
	int *pt;
	int run;

	if (min > max)
	{
		return ('\0');
	}

	pt = malloc((max - min + 1) * sizeof(int));
	if (pt == NULL)
	{
		return (NULL);
	}
	for (run = 0; min <= max; run++)
	{
		pt[run] = min;
		min++;
	}
	return (pt);
}
