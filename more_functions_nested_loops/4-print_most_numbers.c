#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Imprime les nombres de 0 à 9.
 *
 * Return: rien.
 */
void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	if (n == '2' || n == '4')
	{
		_putchar(n);
	}
}
