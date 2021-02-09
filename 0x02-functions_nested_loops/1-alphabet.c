#include "holberton.h"

/**
 * print_alphabet - in lowercase, followed by a new line
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

