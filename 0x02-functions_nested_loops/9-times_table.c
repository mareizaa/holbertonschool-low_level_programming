#include "holberton.h"
/**
* times_table - prints the 9 times table
*
* Return: Always 0.
*/

void times_table(void)
{
	int f, c, r;

	for (f = 0; f <= 9; f++)
	{
		for (c = 0; c <= 9; c++)
		{
			r = (f * c);
			_putchar('0' + r);
		}
		if (r <= 9)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + r);
		}
		_putchar('\n');
	}
}
