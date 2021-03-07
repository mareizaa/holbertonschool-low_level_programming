#include "holberton.h"
#include <stdio.h>

/**
 *puts_half - print string
 *
 *@str: print character
 *
 *Return: Always 0.
 */
void puts_half(char *str)
{
	int l, n, par;

	for (l = 0; str[l] != '\0'; l++)
	{
	}
	if ((l % 2) == 0)
	{
		n = (l / 2);
		for (par = n; par < l; par++)
		{
			_putchar(str[par]);
		}
	}

	else
	{
		n = (l - 1) / 2;
		for (par = n + 1; par < l; par++)
		{
			_putchar(str[par]);
		}
	}
	_putchar('\n');
}
