#include <stdio.h>
#include "dog.h"

/**
 * print_dog - struct
 * @d: pointer
 */
void print_dog(struct dog *d)
{
	if (d == 0)
	{
		return;
	}
	if ((*d).name != NULL)
	{
		printf("Name: %s\n", (*d).name);
	}
	else
	{
		printf("Name: (nil)\n");
	}
	if ((*d).age < 0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %f\n", (*d).age);
	}
	if ((*d).owner != NULL)
	{
		printf("Owner: %s\n", (*d).owner);
	}
	else
	{
		printf("Owner: (nil)\n");
	}
}
