#include "holberton.h"
/**
* _abs - absolute value of an integer
*
*@n: The character to print
*
* Return: Always 0.
*/

int _abs(int n)
{
	int a;

	if (n < 0)
	{
		a = n * -1;
		return (a);
	}
	return (n);
}
