#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char hol[10] = "Holberton\n";
	int pos;

	for (pos = 0; pos <= 9; pos++)
	{
		_putchar(hol[pos]);
	}
	return (0);
}
