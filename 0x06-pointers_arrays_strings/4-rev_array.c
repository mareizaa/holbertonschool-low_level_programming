#include "holberton.h"

/**
 *reverse_array - reverse array
 *@a: array
 *@n: number of elements of the array
 *Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int tf = n - 1, l, s;

	for (l = 0; l < tf; l++, tf--)
	{
		s = a[l];
		a[l] = a[tf];
		a[tf] = s;
	}
}
