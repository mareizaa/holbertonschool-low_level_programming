#include "holberton.h"

/**
 *string_toupper - changes all lowercase letters
 *@s: string
 *
 *Return: Always 0.
 */
char *string_toupper(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{
		if (s[l] >= 97 && s[l] <= 122)
		{
			s[l] = s[l] - 32;
		}
	}
	return (s);
}
