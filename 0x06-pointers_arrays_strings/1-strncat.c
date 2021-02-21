#include "holberton.h"

/**
 *_strncat - concatenates two strings
 *@dest: string detino
 *@src: string two
 *@n: Space Array
 *Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int l, a;

	for (l = 0; dest[l] != '\0'; l++)
	{
	}
	for (a = 0; a < n && src[a] != '\0'; a++, l++)
	{
		dest[l] = src[a];
	}
	return (dest);
}
