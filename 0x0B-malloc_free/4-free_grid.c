#include <stdlib.h>

/**
 * free_grid - frees a 2-dimensional grid created by
 *	       by alloc_grid function
 * @grid: A pointer to a pointer of the grid created.
 * @height: The height of the grid.
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int row_index;

	for (row_index = height; row_index >= 0; row_index--)
	{
		free(grid[row_index]);
	}
	/*free the grid*/
	free(grid);
}
