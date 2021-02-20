#include "holberton.h"

/**
 *_strcat - concatenates two strings
 *@dest: string detino
 *@src: string two
 *Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int l, a;

	for (l = 0; dest[l] != '\0'; l++)
	{
	}
	for (a = 0; src[a] != '\0'; a++, l++)
	{
		dest[l] = src[a];
	}
	dest[l] = '\0';
	return (dest);
}
