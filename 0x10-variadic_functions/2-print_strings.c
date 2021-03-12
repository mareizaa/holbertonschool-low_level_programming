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
	char *copy;

	va_list values;

	va_start(values, n);

	for (c = 0; c < n; c++)
	{
		copy = va_arg(values, char *);
		if (copy == NULL)
		{
			printf("(nil)");
		}
		if (separator != NULL && copy != NULL)
		{
			printf("%s", copy);
			if (c < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(values);
}
