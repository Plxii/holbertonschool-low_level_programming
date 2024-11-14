#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 * @grid: Representing the 2D array.
 * @height: Represents the number of rows in the 2D array.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
