#include "main.h"
#include <stdio.h>

/**
 * *leet - Function that encodes a string into 1337.
 * @str:
 *
 * Return: void.
 */
char *leet(char *str)
{
	int i;
	char *leet_chars = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = leet_chars[0];
		}
		if (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = leet_chars[1];
		}
		if (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = leet_chars[2];
		}
		if (str[i] == 't' || str[i] == 'T')
		{
			str[i] = leet_chars[3];
		}
		if (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = leet_chars[4];
		}
	}
	return (str);
}
