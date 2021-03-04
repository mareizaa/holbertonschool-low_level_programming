#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: - cantidad de strings
 * @av: - strings
 * Return: Always 0.
 */

char *argstostr(int ac, char **av)
{
	int loop, in, counter = 0, lengh = 0;
	char *container;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (loop = 0; loop < ac; loop++)
	{
		for (in = 0; av[loop][in]; in++)
		{
			lengh++;
		}
	}
	lengh = lengh + ac;
	container = malloc(sizeof(char) * lengh + 1);

	if (container == NULL)
	{
		return (NULL);
	}

	for (loop = 0; loop < ac; loop++)
	{
		for (in = 0; av[loop][in]; in++)
		{
			container[counter] = av[loop][in];
			counter++;
		}
		if (container[counter] == '\0')
		{
			container[counter++] = '\n';
		}
	}
	return (container);
}
