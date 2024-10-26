#include "main.h"

/**
 * print_alphabet_x10 - imrprime l'alphabet 10 fois
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char c = 'a';

	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		for (c = 'a'; c <= 'z'; c++)

			_putchar(c);

		_putchar ('\n');
	}
}
