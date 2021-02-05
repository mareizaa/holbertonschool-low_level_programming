#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z = 122;

	while (z >= 97)
	{
		putchar(z);
		--z;
	}
	putchar('\n');

	return (0);
}
