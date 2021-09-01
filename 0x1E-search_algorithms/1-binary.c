#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * @array: first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: index where the value was found EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = (int)size - 1, m, j, i;

	printf("Searching in array: ");
	for(j = 0; j < r; j++)
	{
		printf("%d, ", array[j]);
	}
	printf("%d\n", array[j]);
	while (l < r)
	{
		m = (l + r) / 2;
		if (array[m] < value)
		{
			l = m + 1;
			printf("Searching in array: ");
			for(i = l; i < r; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("%d\n", array[i]);
		}
		else if (array[m] > value)
		{
			r = m - 1;
			printf("Searching in array: ");
			for(i = l; i < r; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("%d\n", array[i]);
		}
		else
		{
			return (m);
		}
	}
	return (-1);
}
