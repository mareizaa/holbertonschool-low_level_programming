#include "holberton.h"

/**
 *more_numbers - prints the numbers 0 to 14
 *
 *Return: Always 0.
 */
void more_numbers(void)
{
	int v, num;

	for (v = 0; v <= 9; v++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
