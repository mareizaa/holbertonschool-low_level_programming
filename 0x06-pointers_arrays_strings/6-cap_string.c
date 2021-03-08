#include "holberton.h"

/**
 *cap_string - changes all lowercase letters
 *@str: string
 *
 *Return: Always 0.
 */
char *cap_string(char *str)
{
	int l, l2;
	char esp[] = " \t\n,;.!?\"(){}";

	for (l = 0; str[l] != '\0'; l++)
	{
		if (l == 0)
		{
			str[l] = str[l] - 32;
		}

		for (l2 = 0; esp[l2] != '\0'; l2++)
		{
			if (str[l] == esp[l2])
			{
				if (str[l + 1] >= 97 && str[l + 1] <= 122)
				{
					str[l + 1] = str[l + 1] - 32;
				}
			}
		}
	}
	return (str);
}
