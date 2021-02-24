#include "holberton.h"

/**
 *_strpbrk - gets the length of a prefix substring
 *@s: String
 *@accept: substring
 *Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int l, a;

	for (l = 0; s[l] != '\0'; l++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[l] == accept[a])
			{
				return (s + l);
			}
		}
	}
	return ('\0');
}
