#include "holberton.h"

/**
 * print_alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int abc = 'a';

	while (abc <= 'z')
	{
		_putchar(abc);
		abc++;
	}
	_putchar('\n');
}

