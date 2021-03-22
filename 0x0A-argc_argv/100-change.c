#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - print main
 * @argc: size argv
 * @argv: strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int cents = 0, run, run1;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	run1 = atoi(argv[1]);
	if (run1 < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (run = 0; run < 5; run++)
		{
			if (run1 >= coins[run])
			{
				run1 -= coins[run];
				cents += 1;
				if (run1 >= coins[run])
				{
					run--;
				}
				else if (run1 == 0)
				{
					break;
				}
			}
		}
	printf("%d\n", cents);
	return (0);
	}
}
