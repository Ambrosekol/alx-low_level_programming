#include "main.h"
/**
  * free_grid - a function that frees a 2 dimensional grid
  * @grid: Grid to be freed
  * @height: height of grid
  * Return: Void
  */
void free_grid(int **grid, int height)
{
	int k;

	if (grid == NULL || height <= 0)
		return;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
