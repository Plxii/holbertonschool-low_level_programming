#include "main.h"
#include <stdio.h>

/**
 * racine_auxiliaire - Explores integers successively by incrementing x.
 * @i: Number for which we are looking for the square root.
 * @x: an integer representing the number we're testing to see
 * if multiplying it by itself gives i.
 *
 * Return: x find the square root,
 * else -1 pas de racine carrée naturelle entière.
 */
int racine_auxiliaire(int i, int x)
{
	if (x * x == i)
	{
		return (x);
	}
	else if (x * x >= i)
	{
		return (-1);
	}
	else
	{
		return (racine_auxiliaire(i, x + 1));
	}
}
/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @n: Numbers.
 *
 * Return: If n does not have a natural square root
 * the function should return -1.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (racine_auxiliaire(n, 1));
	}
}
