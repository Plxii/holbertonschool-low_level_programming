#include "main.h"
#include <ctype.h>

/**
 * int _islower(int c) - ecrire une fonction qui verifie la présence de caractère minuscules.
 *
 * Return: Always 0.
 *
 */

int _islower(int c);
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
