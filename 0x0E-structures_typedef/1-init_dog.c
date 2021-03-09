#include <stdio.h>
#include "dog.h"

/**
 * init_dog - struct
 * @name: nombre
 * @age: age
 * @owner: owner
 * @d: pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != '\0')
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
