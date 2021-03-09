#include <stdio.h>
#include "dog.h"

/**
 * print_dog - struct
 * @d: pointer
 */
void print_dog(struct dog *d)
{
	if (d != '\0')
	{
		if ((*d).name != '\0')
		{
			printf("Name: %s\n", (*d).name);
		}
		else
		{
			printf("Name: %p\n", (*d).name);
		}
		if ((*d).age != '\0')
		{
			printf("Age: %f\n", (*d).age);
		}
		else
		{
			printf("Name: %p\n", (*d).age);
		}
		if ((*d).owner != '\0')
		{
			printf("Owner: %s\n", (*d).owner);
		}
		else
		{
			printf("Name: %p\n", (*d).owner);
		}
	}
}
