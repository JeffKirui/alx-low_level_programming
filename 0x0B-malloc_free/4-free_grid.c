#include "main.h"
#include <stdlib.h>

/**
  * free_grid - free up a 2 dimensional grid
  * @grid: double pointer to be freed
  * @height: height of grid
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
