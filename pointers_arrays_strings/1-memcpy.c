#include "main.h"

/**
 * _memcpy - Function that copies memory area.
 * @dest: Pointer to the destination memory arena.
 * @src: Pointer to the source memory area.
 * @n: Numbers.
 *
 * Return: Pointer to the destination memory arena "dest".
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
