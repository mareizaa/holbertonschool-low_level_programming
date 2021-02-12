#include "holberton.h"

/**
 *print_diagonal - draws a diagonal
 *@n: number of times
 *Return: Always 0.
 */
void print_diagonal(int n)
{
	int v, e;

	for (v = 1; v <= n; v++)
	{
		for (e = 1; e <= v - 1; e++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
