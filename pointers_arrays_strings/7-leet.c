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
	int i, j;
	char leet_chars[] = "43071";
	char letters[] = "aeotlAEOTL";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = leet_chars[j / 2];
				break;
			}
		}
	}
	return (str);
}
