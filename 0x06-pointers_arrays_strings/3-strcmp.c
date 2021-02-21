#include "holberton.h"

/**
 *_strcmp - compara two strings
 *@s1: string one
 *@s2: string two
 *Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int l;

	for (l = 0; (s1[l] = '\0') && (s2[l] != '\0');)
	{
		l++;
		if (s1[l] < s2[l])
			return (s1[l] - s2[l]);

		else if (s1[l] > s2[l])
			return (s1[l] - s2[l]);
	}
	return (0);
}
