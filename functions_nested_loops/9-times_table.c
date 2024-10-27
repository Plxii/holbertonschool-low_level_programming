#include "main.h"
#include <stdio.h>

/**
 * times_table - Imprime la table de 9
 * en commançant par 0
 *
 * Return: rien
 *
 */

void times_table(void)
{
	int a, b, c;

	for (c = 0; c < 10; c++)
	{
		for (a = 0; a < 10; a++)
		{
			b = a * c;
			if (b < 10)
			{
				if (a != 0)
				{
					_putchar(' ');
				}
				_putchar((b % 10) + '0');
			}
			else
			{
				_putchar((b / 10) + '0');
				_putchar((b % 10) + '0');
			}
			if (a != 9)
			{
				_putchar(',');
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}





