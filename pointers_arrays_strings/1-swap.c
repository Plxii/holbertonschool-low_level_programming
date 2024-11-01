#include "main.h"
#include <stdio.h>

/**
 * swap_int - Fonction qui permute les valeurs de deux entiers.
 * @a: Le paramètre
 * @b: Le paramètre
 *
 * Return: rien.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
