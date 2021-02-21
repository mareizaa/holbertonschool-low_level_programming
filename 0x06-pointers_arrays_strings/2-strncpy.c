#include "holberton.h"

/**
 *_strncpy - copy two strings
 *@dest: string destino
 *@src: string two
 *@n: Space Array
 *Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int l;

	for (l = 0; l < n && src[l] != '\0'; l++)
	{
		dest[l] = src[l];
	}
	for (; l < n; l++)
	{
		dest[l] = '\0';
	}
	return (dest);
}
