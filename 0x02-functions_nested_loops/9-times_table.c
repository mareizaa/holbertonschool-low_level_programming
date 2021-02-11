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
			if (r < 10)
			{
				_putchar('0' + r);
				if (c <= 8)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
				if (c <= 8)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
