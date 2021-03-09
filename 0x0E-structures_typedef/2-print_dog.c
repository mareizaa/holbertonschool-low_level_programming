#include <stdio.h>
#include "dog.h"

/**
 * print_dog - struct
 * @d: pointer
 */
void print_dog(struct dog *d)
{
	if (d == '\0')
	{
		return;
	}
	if ((*d).name == '\0')
	{
		printf("Name: (nil)\n");
	}
	printf("Name: %s\n", (*d).name);
	if ((*d).age < 0)
	{
		printf("Age: (nil)\n");
	}
	printf("Age: %f", (*d).age);
	if ((*d).owner == '\0')
	{
		printf("Owner: (nil)\n");
	}
	printf("Owner: %s\n", (*d).owner);
}
