#include "main.h"
#include <stdio.h>

/**
 * factorial - Function that returns the factorial of a given number.
 * @n: numbers.
 *
 * Return: -1 if n is lower than 0, else 1.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
