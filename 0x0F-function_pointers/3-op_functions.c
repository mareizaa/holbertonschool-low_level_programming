#include "3-calc.h"
/**
 * op_add - add of two integers
 * @a: first number
 * @b: second number
 * Return: Always 0.
 */
int op_add(int a, int b)
{
	int add = (a + b);

	return (add);
}
/**
 * op_sub - difference of two integers
 * @a: first number
 * @b: second number
 * Return: Always 0.
 */
int op_sub(int a, int b)
{
	int subtract = (a - b);

	return (subtract);
}
/**
 * op_mul - product of two integers
 * @a: first number
 * @b: second number
 * Return: Always 0.
 */
int op_mul(int a, int b)
{
	int mul = (a * b);

	return (mul);
}
/**
 * op_div - division of two integers
 * @a: first number
 * @b: second number
 * Return: funtion.
 */
int op_div(int a, int b)
{
	int div = (a / b);

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (div);
}
/**
 * op_mod - modulo
 * @a: first number
 * @b: second number
 * Return: funtion.
 */
int op_mod(int a, int b)
{
	int mod = (a % b);

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (mod);
}
