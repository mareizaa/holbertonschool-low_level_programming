#include "holberton.h"

/**
 *_strspn - gets the length of a prefix substring
 *@s: String
 *@accept: substring
 *Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	int l, a, c = 0;

	for (l = 0; s[l] != '\0' && s[l] != ' '; l++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[l] == accept[a])
			{
				c++;
				break;
			}
		}
	}
	return (c);
}
