#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Trace une ligne diagonale sur le terminal.
 * @n: Le nombre de fois que le caractère \ doit être imprimé.
 *
 * Return: rien.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
