#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - struct
 * @d: pointer
 */
void free_dog(dog_t *d)
{
	free((*d).name);
	free((*d).owner);
	free(d);
}
