#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Function that reverses the content of an array of integers.
 * @a: A pointer to an integer, representing the array of ent.
 * @n: An integer representing the number of elements in the array.
 *
 * Return:
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
