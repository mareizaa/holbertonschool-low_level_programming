#include "variadic_functions.h"

/**
 * print_strings - print strings.
 * @n: number of values.
 * @separator: is the string to be printed between numbers.
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int c;

	va_list values;

	va_start(values, n);

	for (c = 0; c < n; c++)
	{
		if (separator != NULL)
		{
			printf("%s", va_arg(values, char *));
				if (c < n - 1)
				{
					printf("%s", separator);
				}
		}
	}
	printf("\n");
	va_end(values);
}
