#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: the grid to be freed
 * @height: the height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
    int h;

    for (h = 0; h < height; h++) {
        free(grid[h]);
    }

    free(grid);
}
