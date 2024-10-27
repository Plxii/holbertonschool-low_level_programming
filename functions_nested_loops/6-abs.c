#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - Prend un entier comme argument,
 * et retourne un entier
 *
 * n: La valeur absolue d'un entier
 *
 * Return: -n si n est négatif, retourne sa valeur positive
 * sinon retourne a n.
 *
 */

int _abs(int n)
{

	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}

