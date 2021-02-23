#include "holberton.h"

/**
 *_memcpy - copies memory area
 *@dest: string detino
 *@src: string two
 *@n: Space Array
 *Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int l;
	unsigned int c;

	for (l = 0; src[l] != '\0'; l++)
	{
	}
	for (c = 0; c < n; c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}
