#include "holberton.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
	int run, abc;

	for (run = 1; run <= 10; run++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}
		_putchar('\n');
	}

}
