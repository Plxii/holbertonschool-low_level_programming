#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - Fonction qui renvoie la longueur d'une chaîne
 * de caractères.
 * @s: Chaîne de caractère.
 *
 * Return: La longueur.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
