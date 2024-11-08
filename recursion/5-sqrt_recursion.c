#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @n: Numbers.
 *
 * Return: If n does not have a natural square root
 * the function should return -1.
 */
int _racine_auxiliaire(int n, int x);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_racine_auxiliaire(n, 1));
	}
}
/**
 * _racine_auxiliaire - Explores integers successively by incrementing x.
 * @n: Number for which we are looking for the square root.
 * @x: an integer representing the number we're testing to see
 * if multiplying it by itself gives n.
 *
 * Return: x find the square root,
 * else -1 pas de racine carrée naturelle entière.
 */
int _racine_auxiliaire(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	else
	{
		return (_racine_auxiliaire(n, x + 1));
	}
}
