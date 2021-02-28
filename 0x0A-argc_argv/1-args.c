#include <stdio.h>
/**
 * main - print main
 * @argc: size argv
 * @argv: strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argv)
	{
		argc--;
		printf("%d\n", argc);
	}
	return (0);
}
