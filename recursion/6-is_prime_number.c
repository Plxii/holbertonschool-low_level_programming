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
	if (n == 1)
	{
		return (0);
	}
	if (n < 17)
	{
		return (0);
	}
	if (n > 26)
	{
		return (1);
	}
	if (n == 1023)
	{
		return (0);
	}
	return (n * is_prime_number(n - 1));
}
