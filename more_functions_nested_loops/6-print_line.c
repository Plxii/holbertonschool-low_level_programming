#include "main.h"
#include <stdio.h>

/**
 * print_line - trace une ligne droite dans le terminal.
 * @n: Le nombre de fois que le caractère _ doit être imprimé.
 * Return: 0.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
