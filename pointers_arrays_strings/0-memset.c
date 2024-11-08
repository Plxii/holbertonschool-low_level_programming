#include "main.h"
#include <stdio.h>

/**
 * _memset - Function that fills memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The byte that will be used to fill the memory area.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 1; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
