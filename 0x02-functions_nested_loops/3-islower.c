#include "holberton.h"
/**
* _islower - lowercase or otherwise
*@c: The character to print
*
* Return: Always 0.
*/
int _islower(int c)
{
	if (c >= 96)
	{
		return (1);
	}
	else if (c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
