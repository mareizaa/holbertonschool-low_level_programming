#include "holberton.h"

/**
 *rev_string - reverse string
 *
 *@s: print character
 *
 *Return: Always 0.
 */
void rev_string(char *s)
{
	int c, a;

	for (c = 0; s[c] != '\0'; c++)
	{
		_putchar(s[c]);
	}
	c--;

	for (a = 1; s[c] >= '\0'; a++)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
