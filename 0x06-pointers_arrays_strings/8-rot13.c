#include "holberton.h"

/**
 *rot13 - encodes a string
 *@s: string
 *
 *Return: Always 0.
 */
char *rot13(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{
		if ((s[l] >= 97 && s[l] <= 109) || (s[l] >= 65 && s[l] <= 77))
		{
			s[l] = s[l] + 13;
		}
		else if ((s[l] >= 110 && s[l] <= 122) || (s[l] >= 78 && s[l] <= 90))
		{
			s[l] = s[l] - 13;
		}
	}
	return (s);
}
