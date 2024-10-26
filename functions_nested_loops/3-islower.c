#include "main.h"
#include <ctype.h>

/**
 * _islower - Vérifie la presence de caractères minuscules.
 * @c: le caractère à vérifier.
 *
 * Return: 1 si c'est une lettre minuscule, sinon 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
