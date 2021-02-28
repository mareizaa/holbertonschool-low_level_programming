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
	int i, multi = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		multi = multi * atoi(argv[i]);
	}
	printf("%d\n", multi);
	return (0);
}

