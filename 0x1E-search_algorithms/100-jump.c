#include "search_algos.h"
/**
 * jump_search - searches for a value in an array of integers
 * @array: first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: index where the value was found EXIT_SUCCESS
 */
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(value), prev = 0, siz = (int)size;

	while (array[min(step, siz) - 1] < value)
	{
		prev = step;
		step = step + sqrt(siz);
		if (prev >= siz)
			return (-1);
	}

	while (array[prev] < value)
	{
		prev++;
		if (prev == min(step, siz))
			return (-1);
	}

	if (array[prev] == value)
		return (prev);

	return (-1);
}

/**
 * min - calculates the minimum number between two integers
 * @a: value 1
 * @b: value 2
 * Return: min
 */
int min(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}
