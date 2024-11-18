#include <stddef.h>
#include "function_pointers.h"


/**
 * array_iterator - Function that executes a function
 * as a parameter on each element of an array.
 * @array: array.
 * @size: size of the array.
 * @action: action is a pointer to the function you need to use.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array == 0)
	{
		return;
	}
	if (size == 0)
	{
		return;
	}
	if (action == 0)
	{
		return;
	}
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
