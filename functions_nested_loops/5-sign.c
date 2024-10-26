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
	if (n > '0')
	{
		printf('+');
		return (1);
	}
	if (n == '0')
	{
		printf('0');
		return (0);
	}
	else
	{
		printf('-');
		return (-1);
	}
}
