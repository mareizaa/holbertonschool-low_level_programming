#include "holberton.h"
#include <stdio.h>

/**
*print_to_98 - print numbers
*@n: print
*
* Return: Always 0.
*/
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		printf("%d", n);
		if (n < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
}
