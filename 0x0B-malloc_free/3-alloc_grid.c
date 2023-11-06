#include <stdlib.h>

int **alloc_grid(int width, int height) {
    int **grid;
    int h, w, i;

    /* Return NULL for invalid dimensions */
    if (width <= 0 || height <= 0) {
        return NULL;
    }

    /* Allocate memory for the rows of the 2D array */
    grid = (int **)malloc(sizeof(int *) * height);
    if (grid == NULL) {
        return NULL;  /* Return NULL if malloc fails */
    }

    /* Allocate memory for each row and initialize elements to 0 */
    for (h = 0; h < height; h++) {
        grid[h] = (int *)malloc(sizeof(int) * width);
        if (grid[h] == NULL) {
            /* Free previously allocated memory to prevent leaks */
            for (i = 0; i < h; i++) {
                free(grid[i]);
            }
            free(grid);
            return NULL;  /* Return NULL if malloc fails for a row */
        }

        for (w = 0; w < width; w++) {
            grid[h][w] = 0;
        }
    }

    return grid;
}
