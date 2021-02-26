#include "holberton.h"
int _compare(int number, int aux);

/**
 * is_prime_number - returns the natural square root of a number
 *@n: number
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (_compare(n, 2));
}

/**
 *_compare - comparador
 *@number: n
 *@aux: numero
 *Return: Always 0
 */

int _compare(int number, int aux)
{
	if (number == aux)
		return (1);

	if (!(number % aux))
		return (0);

	aux++;
	return (_compare(number, aux));
}
