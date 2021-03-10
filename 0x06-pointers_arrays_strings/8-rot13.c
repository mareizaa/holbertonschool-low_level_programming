#include "holberton.h"

/**
 *rot13 - encodes a string
 *@str: string
 *
 *Return: Always 0.
 */
char *rot13(char *str)
{
	int l, l2;
	char esp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cam[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (l = 0; str[l] != '\0'; l++)
	{
		for (l2 = 0; esp[l2] != '\0'; l2++)
		{
			if (str[l] == esp[l2])
			{
				str[l] = cam[l2];
				break;
			}
		}
	}
	return (str);
}
