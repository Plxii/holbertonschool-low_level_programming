#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - Function that prints a name.
 * @name: Name of the person.
 * @f: function passed.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
