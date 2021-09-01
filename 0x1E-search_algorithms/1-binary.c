#include "search_algos.h"
/**
 * binary_search - searches for a value in an array of integers
 * @array: first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: index where the value was found EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = (int)size - 1, m, j;

	if (array == NULL)
		return (-1);

	while (l < r)
	{
		printf("Searching in array: ");
		for (j = l; j < r; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);
		m = (l + r) / 2;
		if (array[m] < value)
		{
			l = m + 1;
		}
		else if (array[m] > value)
		{
			r = m - 1;
		}
		else
			return (m);
	}
	return (-1);
}
