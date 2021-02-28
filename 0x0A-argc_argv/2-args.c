#include <stdio.h>
/**
 * main - print main
 * @argc: size argv
 * @argv: strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
