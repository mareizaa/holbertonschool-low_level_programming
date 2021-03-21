#include "holberton.h"

/**
 *print_triangle - draws a triangle
 *@size: size
 *Return: Always 0.
 */

void print_triangle(int size)
{
	int espaci, num, aux;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (aux = 0; aux < size; aux++)
	{
		for (espaci = size - 1 - aux; espaci > 0; espaci--)
		{
			_putchar(' ');
		}
		for (num = aux + 1; num > 0; num--)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
