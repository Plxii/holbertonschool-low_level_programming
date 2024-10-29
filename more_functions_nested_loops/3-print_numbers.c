#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Imprime les nombres de 0 à 9.
 *
 * Return: rien.
 */
void print_numbers(void)
{
	int n;

	for (n = '0'; n < '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
