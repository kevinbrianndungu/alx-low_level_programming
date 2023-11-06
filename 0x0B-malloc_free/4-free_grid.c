#include <stdlib.h>

void free_grid(int **grid, int height)
{
    int h;  /* Declare variable 'h' here */

    if (grid == NULL || height <= 0) {
        return;  /* Nothing to free if grid is NULL or height is non-positive. */
    }

    for (h = 0; h < height; h++) {
        if (grid[h] != NULL) {
            free(grid[h]);  /* Free each row of the grid. */
        }
    }

    free(grid);  /* Free the grid itself. */
}
