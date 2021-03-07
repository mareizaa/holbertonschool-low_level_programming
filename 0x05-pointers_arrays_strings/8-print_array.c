#include "holberton.h"
#include <stdio.h>

/**
 *print_array - print string
 *@a: string
 *@n: number elements
 *Return: Always 0.
 */

void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		printf("%d", a[l]);
		if (l < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
