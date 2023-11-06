#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Deallocates the memory used by a 2D grid.
 * @param grid: The grid to be freed.
 * @param height: The number of rows in the grid.
 */
void free_grid(int **grid, int height) {
    if (grid == NULL || height <= 0) {
        return;  /* Nothing to free */
    }

    for (int h = 0; h < height; h++) {
        free(grid[h]);
    }
    free(grid);
}
