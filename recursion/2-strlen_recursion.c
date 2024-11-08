#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - Function that returns the length of a string.
 * @s: string array.
 *
 * Return: 1 the length of the remaining chain, else
 * 0 to indicate the end of the chain.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
