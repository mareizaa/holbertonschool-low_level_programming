#include "variadic_functions.h"

/**
 * print_all - print anything.
 * @format: is the string to be printed between numbers.
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	va_list values;

	va_start(values, format);

	while (*format != '\0')
	{
		switch (format)
		{
		case 'c':
			printf("%c", va_arg(values, char));
			break;
		case 'i':
			printf("%d", va_arg(values, int));
			break;
		case 'f':
			printf("%f", va_arg(values, double));
			break;
		case 's':
			printf("%s", va_arg(values, char *));
		}
	}
	printf("\n");
	va_end(values);
}
