#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - copy struct
 * @name: nombre
 * @age: age
 * @owner: owner
 * Return: Always 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int cn, co, n, o;

	if (name == NULL || owner == NULL)
		return (NULL);
	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	for (cn = 0; name[cn] != '\0'; cn++)
	{}
	for (co = 0; owner[co] != '\0'; co++)
	{}
	(*p).name = malloc((cn + 1) * (sizeof(char)));
	if ((*p).name == NULL)
	{
		free(p);
		return (NULL);
	}
	(*p).owner = malloc((co + 1) * (sizeof(char)));
	if ((*p).owner == NULL)
	{
		free((*p).name);
		free(p);
		return (NULL);
	}
	for (n = 0; n < cn; n++)
		p->name[n] = name[n];
	(*p).age = age;
	for (o = 0; o < co; o++)
		p->owner[o] = owner[o];
	return (p);
}
