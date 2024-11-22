#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - function.
 * @a: int.
 * @b: int.
 *
 * Return: a + b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function.
 * @a: integer.
 * @b: integer.
 *
 * Return: a - b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function.
 * @a: integer.
 * @b: integer.
 *
 * Return: a * b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function.
 * @a: integer.
 * @b: integer.
 *
 * Return: b == 0.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function.
 * @a: integer.
 * @b: integer.
 *
 * Return: the reminderof division.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
