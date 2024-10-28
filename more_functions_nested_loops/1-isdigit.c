#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Vérifie la presence d'un chiffre (0 à 9)
 * @c: Le chiffre
 *
 * Return: 1 si c est un chiffre sinon 0
 */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
