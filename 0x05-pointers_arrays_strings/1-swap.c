#include "holberton.h"

/**
 *swap_int - function that swaps the values of two integers
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
