#include "holberton.h"

/**
 *_strlen - print length
 *
 *@s: print character
 *
 *Return: Always 0.
 */
int _strlen(char *s)
{
	int l;

	for (l = 0; *s != '\0';)
	{
		l++;
		s++;
	}
		return (l);
}
