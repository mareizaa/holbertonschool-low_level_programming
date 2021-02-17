#include "holberton.h"

/**
 *reset_to_98 - updates the value it points to 98
 *
 *@a: print character
 *@b: print character
 *
 *Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int stock;

	stock = *a;
	*a = *b;
	*b = stock;
}
