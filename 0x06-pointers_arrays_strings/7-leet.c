#include "holberton.h"

/**
 *leet - encodes a string into 1337
 *@str: string
 *Return: Always 0.
 */
char *leet(char *str)
{
	int l, l2;
	char esp[] = "aAeEoOtTlL";
	char cam[] = "4433007711";

	for (l = 0; str[l] != '\0'; l++)
	{
		for (l2 = 0; esp[l2] != '\0'; l2++)
		{
			if (str[l] == esp[l2])
			{
				str[l] = cam[l2];
			}
		}
	}
	return (str);
}
