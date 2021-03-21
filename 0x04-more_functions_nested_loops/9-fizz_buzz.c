#include <stdio.h>

/**
 *main - prints the numbers from 1 to 100
 *Return: Always 0.
 */

int main(void)
{
	int run;

	for (run = 1; run <= 100; run++)
	{
		if (run % 3 == 0)
		{
			printf("Fizz");
		}
		else if (run % 5 == 0)
		{
			printf("Buzz");
		}
		else if (run % 5 == 0 && run % 3 == 0)
		{
			printf("Fizz Buzz");
		}
		else
		{
			printf("%d", run);
		}
		if (run < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
