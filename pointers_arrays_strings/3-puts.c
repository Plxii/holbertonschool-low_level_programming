#include "main.h"
#include <stdio.h>

/**
 * _puts - Fonction qui imprime une chaîne.
 * @str: La chaîne.
 *
 * Return: rien.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
		_putchar(str[i]);
	}
	_putchar('\n');
}
