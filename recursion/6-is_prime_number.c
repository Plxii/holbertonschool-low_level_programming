#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Function that returns 1
 * if the input integer is a prime number, otherwise return 0.
 * @n: Numbers.
 *
 * Return: if number is first return 1, else 0.
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
