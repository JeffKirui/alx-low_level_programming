#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - main function
 * @grid: int pointer of a pointer
 * @height: int var
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
