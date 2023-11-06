#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid previously created by alloc_grid.
 * @grid: The 2-dimensional grid to be freed.
 * @height: The height of the grid.
 *
 * This function frees the memory allocated for a 2-dimensional grid.
 * It first checks if the grid and its rows are not NULL and then frees them.
 *
 * Return: No return value.
 */
void free_grid(int **grid, int height)
{
    if (grid == NULL || height <= 0) {
        return;  // Nothing to free if grid is NULL or height is non-positive.
    }

    for (int h = 0; h < height; h++) {
        if (grid[h] != NULL) {
            free(grid[h]);  // Free each row of the grid.
        }
    }

    free(grid);  // Free the grid itself.
}
