#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - prints array.
 * @cmp: funtion pointer.
 * @array: array.
 * @size: size array.
 * Return: Always 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (size <= 0)
	{
		return (-1);
	}

	if (cmp != NULL && array != NULL)
	{
		for (c = 0; c < size; c++)
		{
			if ((*cmp)(array[c]) != 0)
			{
				return (c);
			}
		}
	}
	return (-1);
}
