#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid created by alloc_grid function
 * @grid: the 2D grid to free
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
    if (grid == NULL || height <= 0)
        return;

    for (int i = 0; i < height; i++)
    {
        free(grid[i]);
    }

    free(grid);
}
