#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints array.
 * @action: funtion pointer.
 * @array: array.
 * @size: size array.
 * Return: Always 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long c;

	if (action != NULL && array != NULL)
	{
		for (c = 0; c < size; c++)
		{
			(*action)(array[c]);
		}
	}
}
