#include "holberton.h"

/**
 *_strchr - locates a character in a string
 *@s: String
 *@c: occurrence
 *Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{
		if (s[l] == c)
		{
			return (s + l);
		}
	}
	if (s[l] == c)
	{
		return (s + l);
	}
	return ('\0');
}
