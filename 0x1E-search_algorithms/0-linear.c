#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * @array: first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: index where the value was found EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
    {
        return(-1);
    }
    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
        {
            return((int)i);
        }
    }
    return(-1);
}
