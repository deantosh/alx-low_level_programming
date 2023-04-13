#include <stdlib.h>
#include "main.h"

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
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/*allocate memory*/
	grid = malloc(sizeof(int) * (width * height));

	/*if allocation fails*/
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
