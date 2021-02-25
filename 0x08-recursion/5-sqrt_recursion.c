#include "holberton.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *@n: number
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	return (_compare(n, 1));
}

/**
 *_compare - comparador
 *@number: n
 *@aux: numero
 *Return: Always 0
 */

int _compare(int number, int aux)
{
	if (aux * aux == number)
		return (aux);

	if (aux * aux > number)
		return (-1);

	aux++;
	return (_compare(number, aux));
}
