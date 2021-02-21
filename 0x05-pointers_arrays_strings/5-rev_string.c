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
	char b;

	for (c = 0; s[c] != '\0'; c++)
	{
	}
	c--;
	for (a = 0; a < c; a++, c--)
	{
		b = s[a];
		s[a] = s[c];
		s[c] = b;
	}
}
