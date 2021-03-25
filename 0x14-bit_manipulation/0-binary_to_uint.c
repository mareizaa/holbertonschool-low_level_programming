#include "holberton.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: string.
 * Return: unsigned
 */
unsigned int binary_to_uint(const char *b)
{
	int len, run;
	unsigned int base2 = 1, add = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (len = 0; b[len] != '\0'; len++)
	{
	}
	len--;
	for (run = len; run >= 0; run--)
	{
		if (b[run] != '0' && b[run] != '1')
		{
			return (0);
		}
		if (b[run] == '1')
		{
			add = add + base2;
		}
		base2 = base2 * 2;
	}
	return (add);
}
