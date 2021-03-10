#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @f: funtion pointer.
 * @name: name.
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
    if ((*f) != '\0')
	{
		(*f)(name);
	}
	
}
