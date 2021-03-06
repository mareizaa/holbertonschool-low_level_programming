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
	int s;
	if (min > max)
	{
		exit('\0');
	}
	for (s = min; s <= max; s++);
	pt = malloc(s * sizeof(int));
	if (pt == '\0')
	{
		return ('\0');
	}
	for (run = 0; run < max; run++)
	{
		pt[run] = min;
		min++;
	}
	return (pt);
}
