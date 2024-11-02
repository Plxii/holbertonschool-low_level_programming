#include "main.h"
#include <stdio.h>

/**
 * rev_string - Fonction qui inverse une chaîne de caractères.
 * @s: La chaîne de caractère.
 *
 * Return: rien.
 */
void rev_string(char *s)
{
	int i = 0, j;
	char temp;

	while (s[i])
	{
		i++;
	}
	for (j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = temp;
	}
}
