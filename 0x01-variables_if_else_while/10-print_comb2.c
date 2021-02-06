#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	for (; n < 100 ; n++)
	{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
		if (n < 99)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
