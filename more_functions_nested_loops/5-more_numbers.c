#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Imprime 10 fois les numbres de 0 à 14.
 *
 * Return: rien.
 */
void more_numbers(void)
{
	int i, n;

	for (i = '0'; i <= '9'; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
