#include "holberton.h"
int  _strlen_recursion(char *l);
int compare_(char *s, int _strlen, int counter);

/**
 * is_palindrome - returns the natural square root of a number
 * @s: pointer
 * Return: Always 0.
 */

int is_palindrome(char *s)
{
	int _strlen = _strlen_recursion(s);

	return (compare_(s, _strlen, 0));
}

/**
 *_strlen_recursion - counter
 *@l: strlen
 *Return: Always 0
 */

int  _strlen_recursion(char *l)
{
	if (*l)
	{
		return (1 + _strlen_recursion(l + 1));
	}
	return (0);
}

/**
 *compare_ - compare strings
 *@_strlen: length
 *@counter:  increment
 *@s: string
 *Return: Always 0
 */

int compare_(char *s, int _strlen, int counter)
{
	if (counter >= _strlen)
		return (1);

	if (s[counter] != s[_strlen - 1])
		return (0);

	return (compare_(s, --_strlen, ++counter));

	return (1);
}
