#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Affiche tous les nombres de n à 98.
 * @n: Le nombre de départ.
 *
 * Return: rien
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
