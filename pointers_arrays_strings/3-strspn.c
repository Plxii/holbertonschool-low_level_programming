#include "main.h"
#include <stdio.h>

/**
 * _strspn - Function that gets the length of a prefix substring.
 * @str: Main string.
 * @accept: The string containing the characters.
 *
 * Return: The length of the prefix substring of @str.
 */
unsigned int _strspn(const char *str, const char *accept)
{
	unsigned int i, j;
	int found;

	for (i = 0; str[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (str[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
	}

	return (i);
}

