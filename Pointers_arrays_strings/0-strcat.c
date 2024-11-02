#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcat - Function that concatenates two strings.
 * @dest: A pointer to a destination string.
 * @src: A pointer to a source string.
 *
 * Return: A pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	{
		dest[i] = src[j];
		return (dest);
	}
}
