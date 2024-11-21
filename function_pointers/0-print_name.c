#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Function that prints a name.
 * @name: Name of the person.
 * @f: function passed.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
