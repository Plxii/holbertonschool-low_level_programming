#include "main.h"
#include <stdio.h>

/**
 * *_strncat - Function that concatenates two strings.
 * @dest: The destination string to which
 * characters will be added.
 * @src: The source string from which you will
 * copy a certain number of characters.
 * @n: An integer specifying the maximum number of
 * characters to be copied from src.
 *
 * Return: The pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
