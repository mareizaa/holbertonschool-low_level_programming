#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = '0';
	int A = 97;

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	while (A <= 102)
	{
		putchar(A);
		A++;
	}
	putchar('\n');

	return (0);
}
