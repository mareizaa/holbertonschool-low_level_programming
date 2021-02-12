#include "holberton.h"

/**
 *print_line - draws a straight line
 *@n: number of times
 *Return: Always 0.
 */
void print_line(int n)
{
	int v;

	for (v = 1; v <= n; v++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
