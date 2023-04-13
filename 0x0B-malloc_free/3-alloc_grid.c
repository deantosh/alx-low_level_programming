#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - Allocates a memory to a 2-dimensional
 *		  array of integers.
 * @width: The width of the 2-d array.
 * @height: The height of the 2-d array.
 *
 * Return: A pointer to the array allocated memory.
 */
int **alloc_grid(int width, int height)
{
	int row_index, column_index;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	/*allocate memory to entire grid*/
	grid = malloc(sizeof(int *) * height);

	/*if allocation fails*/
	if (grid == NULL)
		return (NULL);

	for (row_index = 0; row_index < height; row_index++)
	{
		/*allocate memory of each row*/
		grid[row_index] = malloc(sizeof(int) * width);

		for (column_index = 0; column_index < width; column_index++)
			grid[row_index][column_index] = 0;
	}
	return (grid);
}
