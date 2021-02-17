#include "holberton.h"

/**
 *print_rev - print reverse
 *
 *@s: print character
 *
 *Return: Always 0.
 */
void print_rev(char *s)
{
	int l;
	int r;

	for (l = 0; *s != '\0';)
	{
		l++;
		s++;
	}
	for (r = 1; r <= l; r++)
	{
		_putchar(*(s - r));
	}
	_putchar('\n');
}
