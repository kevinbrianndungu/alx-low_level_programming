#include <stdlib.h>

/**
 * alloc_grid - Allocate and initialize a 2D grid of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: If successful, a pointer to the allocated grid. NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid;  /* Pointer to the 2D grid */
	int h, w, i;  /* Loop counters */

	/* Return NULL for invalid dimensions */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the array of pointers to rows */
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		/* Allocate memory for each row and initialize to 0 */
		grid[h] = (int *)malloc(sizeof(int) * width);
		if (grid[h] == NULL)
		{
			/* If malloc fails, free previously allocated memory and return NULL */
			for (i = 0; i < h; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}

		for (w = 0; w < width; w++)
			grid[h][w] = 0;  /* Initialize each element to 0 */
	}

	return (grid);
}
