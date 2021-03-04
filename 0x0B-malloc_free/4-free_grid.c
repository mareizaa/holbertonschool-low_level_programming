#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - funtion free space in memory
 * @grid: - pointer two
 * @height: - heigth array
 * Return: Always 0.
 */

void free_grid(int **grid, int height)
{
	int r;

	for (r = 0; r < height; r++)
	{
		free(grid[r]);
	}
	free(grid);
}
