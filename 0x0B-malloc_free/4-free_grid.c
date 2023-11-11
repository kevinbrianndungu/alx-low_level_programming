#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid previously created by alloc_grid.
 * @grid: The grid to be freed.
 * @height: The height of the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
    if (grid != NULL && height > 0)
    {
        for (int i = 0; i < height; i++)
        {
            if (grid[i] != NULL)
                free(grid[i]);
        }
        free(grid);
    }
}
