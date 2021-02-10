#include "holberton.h"
/**
* print_last_digit - prints the last digit
*
*@n: The character to print
*
* Return: Always 0.
*/

int print_last_digit(int n)
{
	int a;

	a = n % 10;

	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');
	return (a % 10);
}
