#include "main.h"
#include <stdio.h>

 /**
 * print_line - Trace une ligne droite dans un terminal.
 * @n: Le nombre de fois que le caractère _ doit être imprimé.
 *
 * Return: rien.
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
