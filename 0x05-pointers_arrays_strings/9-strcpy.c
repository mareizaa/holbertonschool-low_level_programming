#include "holberton.h"
#include <stdio.h>

/**
 *_strcpy - print string
 *@dest: string
 *@src: number elements
 *Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int l, i;

	for (l = 0; src[l] != '\0' ; l++)
	{
	}
	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
