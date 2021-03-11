#include "variadic_functions.h"

/**
 * print_numbers - print numbers.
 * @n: number of values.
 * @separator: is the string to be printed between numbers.
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int c;

	va_list values;

	if (n == '\0')
	{
		return;
	}
	va_start(values, n);

	for (c = 0; c < n; c++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(values, unsigned int));
				if (c < n - 1)
				{
					printf("%s", separator);
				}
		}
		else
		{
			printf("%d", va_arg(values, unsigned int));
		}
	}
	printf("\n");
	va_end(values);
}
