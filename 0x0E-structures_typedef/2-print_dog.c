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
		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	}
	if ((*d).name == '\0')
	{
		printf("Name: nil\nAge: %f\nOwner: %s\n", (*d).age, (*d).owner);
	}
	if ((*d).age == '\0')
	{
		printf("Name: %s\nAge: nil\nOwner: %s\n", (*d).name, (*d).owner);
	}
	if ((*d).owner == '\0')
	{
		printf("Name: %s\nAge: %f\nOwner: nil\n", (*d).name, (*d).age);
	}
}
