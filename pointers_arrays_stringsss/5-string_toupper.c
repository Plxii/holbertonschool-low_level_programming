#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - Function that changes all lowercase letters.
 * of a string to uppercase.
 * @str: Represent the character string to be modified by the function.
 *
 * Return: void.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
