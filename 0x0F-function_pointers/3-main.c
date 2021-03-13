#include "3-calc.h"
/**
 * main - function
 * @argc: length string
 * @argv: Strings.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int n1, n2;
	int (*pf)(int n1, int n2);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	pf = get_op_func(argv[2]);

	if (pf == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", pf(n1, n2));
	return (0);
}
