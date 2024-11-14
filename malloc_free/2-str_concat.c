#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Function that concatenates two strings.
 * @s1: string.
 * @s2: string.
 *
 * Return: The function should return NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int length1, length2;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	length1 = strlen(s1);
	length2 = strlen(s2);

	result = (char *)malloc(length1 + length2 + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strcat(result, s2);


	return (result);
}

