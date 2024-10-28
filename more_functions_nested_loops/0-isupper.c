#include "main.h"
#include <stdio.h>

/**
 * _isupper - Vérifie la présence d'un caractère majuscule.
 * @c: Le caractère.
 *
 * Return: 1 si c est en majuscule, sinon 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
