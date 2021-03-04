#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - funtion with double pointer
 * @width: - width array
 * @height: - heigth array
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int r, r1, r2, i;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}
	p = malloc(height * sizeof(int *));
	if (p == '\0')
	{
		return ('\0');
	}

	for (r = 0; r < height; r++)
	{
		p[r] = malloc(width * sizeof(int));
		if (p[r] == '\0')
		{
			for (i = 0; i < r; i++)
			{
				free(p[i]);
			}
			free(p);
			return ('\0');
		}	
	}
	for (r1 = 0; r1 < height; r1++)
	{
		for (r2 = 0; r2 < width; r2++)
		{
			p[r1][r2] = 0;
		}
	}
	return (p);
}
