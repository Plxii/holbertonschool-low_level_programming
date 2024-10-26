#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Vérifie si un caractère est un alphabet ( a à z et A à Z) ou non.
 * @c: Le caractère à vérifier
 *
 * Return: 1 si c'est une lettre minuscule ou majuscule, sinon 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z)' || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
