#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int runstring(char *string);
/**
 * main - print main
 * @argc: size argv
 * @argv: strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, add = 0;

	if (*argv[0] < 0)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (runstring(argv[i]))
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

/**
 * runstring - travels argv
 * @string: substring argv
 * Return: Always 0.
 */
int runstring(char *string)
{
	int c = 0;

	while (string[c] != '\0')
	{
		if (isdigit(string[c]))
		{
			c++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
