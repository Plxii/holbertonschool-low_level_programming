#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer.
 * @array: array.
 * @size: The number of elements in the array.
 * @cmp: Pointer to the function to be used to compare values.
 *
 * Return: if no element matches return -1,
 * if size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == 0 || size < 1 || cmp == 0)
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
		{
			return (x);
		}
	}
	return (-1);
}
