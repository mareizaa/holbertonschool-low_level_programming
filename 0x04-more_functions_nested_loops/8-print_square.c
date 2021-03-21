#include "holberton.h"

/**
 *print_square -  prints a square
 *@size: size
 *Return: Always 0.
 */

void print_square(int size)
{
	int espaci, aux;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (aux = 0; aux < size; aux++)
	{
		for (espaci = 0; espaci < size; espaci++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
