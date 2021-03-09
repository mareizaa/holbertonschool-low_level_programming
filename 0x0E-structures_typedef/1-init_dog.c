#include <stdio.h>
#include "dog.h"

/**
 * struct dog - struct
 * @name: nombre
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != '\n')
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}