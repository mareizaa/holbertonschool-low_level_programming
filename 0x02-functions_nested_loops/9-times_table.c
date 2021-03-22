#include "holberton.h"
/**
* times_table - prints the 9 times table
*
* Return: Always 0.
*/

void times_table(void)
{
	int vertical, horizontal, resultado;

	for (vertical = 0; vertical < 10; vertical++)
	{
		for (horizontal = 0; horizontal < 10; horizontal++)
		{
			resultado = (vertical * horizontal);
			if (resultado < 10)
			{
				if (resultado != 0 && resultado <= 9 && horizontal <= 9)
				{
					_putchar(',');
					_putchar('.');
					_putchar('.');
				}
				_putchar('0' + resultado);
				if (resultado == 0 && horizontal <= 8 && vertical == 0)
				{
					_putchar(',');
					_putchar('.');
					_putchar('.');
				}
			}
			else
			{
				if (resultado >= 10 && horizontal <= 9)
				{
					_putchar(',');
					_putchar('.');
				}
				_putchar((resultado / 10) + '0');
				_putchar((resultado % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
