#include "main.h"
#include <stdio.h>

/**
 * print_sign - imprime le signe d'un nombre
 * @n: Le caractère a vérifier.
 *
 * Return: 1 et imprime + si superieur a 0
 * sinon renvoie -1 et imprime - si inferieur
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
