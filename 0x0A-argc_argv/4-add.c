#include <stdio.h>
#include <stdlib.h>
/**
 * main - print main
 * @argc: size argv
 * @argv: strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, add = 0;

	if (argv[0] < 0)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]))
		{
			add = add + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", add);
	return (0);
}
