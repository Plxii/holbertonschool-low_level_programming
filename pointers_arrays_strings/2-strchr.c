#include "main.h"
#include <stdio.h>

/**
 * _strchr - Function that locates a character in a string.
 * @s: Pointer to the string to search.
 * @c: Character to locate in the string.
 *
 * Return: Pointer to the first occurence.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
