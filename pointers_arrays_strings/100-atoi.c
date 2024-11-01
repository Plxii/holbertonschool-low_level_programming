#include "main.h"
#include <stdio.h>

/**
 * _atoi - Function that convert a string to an integer.
 * @s: characters
 *
 * Return: Always 0 (Success).
 *
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;
	int started = 0;

	while (*s == ' ')
	{
		s++;
	}
	while (*s == '+' || *s == '-')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		s++;
	}
	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			num = (num * 10) + (*s - '0');
			started = 1;
		}
		else if (started)
		{

			break;
		}
		s++;
	}
	return (sign * num);
}
