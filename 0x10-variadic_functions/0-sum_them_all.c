#include "variadic_functions.h"

/**
 * sum_them_all - Sum the values ​​of an array.
 * @n: number of values.
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int c, stock, resul = 0;

	va_list values;

	va_start(values, n);
	if (n == 0)
	{
		return (0);
	}
	for (c = 0; c < n; c++)
	{
		stock = va_arg(values, unsigned int);
		resul = resul + stock;
	}
	va_end(values);
	return (resul);
}
