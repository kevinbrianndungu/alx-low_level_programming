#include <stdlib.h>

int **alloc_grid(int width, int height) {
    if (width <= 0 || height <= 0) {
        return NULL;  // Return NULL for invalid dimensions
    }

    int **grid = (int **)malloc(sizeof(int *) * height);
    if (grid == NULL) {
        return NULL;  // Return NULL if malloc fails
    }

    for (int h = 0; h < height; h++) {
        grid[h] = (int *)malloc(sizeof(int) * width);
        if (grid[h] == NULL) {
            // Free previously allocated memory
            for (int i = 0; i < h; i++) {
                free(grid[i]);
            }
            free(grid);
            return NULL;  // Return NULL if malloc fails for a row
        }

        for (int w = 0; w < width; w++) {
            grid[h][w] = 0;
        }
    }

    return grid;
}
