#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Function that returns a pointer to a
 * newly allocated space in memory, which contains a
 * copy of the string given as a parameter.
 * @str: A pointer to a string.
 *
 * Return: NULL if str = NULL,On success
 * the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	int length;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);

	copy = (char *)malloc((length + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}
	strcpy(copy, str);
	return (copy);
}
