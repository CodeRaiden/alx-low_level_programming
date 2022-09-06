#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that free memory in the grid
 * @grid: int pointer to a bidimensional array
 * @height: int
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}


