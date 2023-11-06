#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Allocates a 2D grid of integers and initializes all elements to 0.
 * @param width: The number of columns.
 * @param height: The number of rows.
 * @return A pointer to the allocated grid, or NULL on failure.
 */
int **alloc_grid(int width, int height) {
    if (width <= 0 || height <= 0) {
        return NULL;  // Return NULL for invalid dimensions
    }

    int **grid = (int **)malloc(sizeof(int *) * height);
    if (grid == NULL) {
        return NULL;  // Memory allocation failed
    }

    for (int h = 0; h < height; h++) {
        grid[h] = (int *)malloc(sizeof(int) * width);
        if (grid[h] == NULL) {
            // Free any previously allocated memory on failure
            for (int i = 0; i < h; i++) {
                free(grid[i]);
            }
            free(grid);
            return NULL;
        }

        // Initialize elements to 0
        for (int w = 0; w < width; w++) {
            grid[h][w] = 0;
        }
    }

    return grid;
}

/**
 * Deallocates the memory used by a 2D grid.
 * @param grid: The grid to be freed.
 * @param height: The number of rows in the grid.
 */
void free_grid(int **grid, int height) {
    if (grid == NULL || height <= 0) {
        return;  // Nothing to free
    }

    for (int h = 0; h < height; h++) {
        free(grid[h]);
    }
    free(grid);
}

/**
 * Prints a 2D grid of integers.
 * @param grid: The grid to be printed.
 * @param width: The number of columns.
 * @param height: The number of rows.
 */
void print_grid(int **grid, int width, int height) {
    for (int h = 0; h < height; h++) {
        for (int w = 0; w < width; w++) {
            printf("%d ", grid[h][w]);
        }
        printf("\n");
    }
}

int main(void) {
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL) {
        return 1;  // Allocation failed
    }

    print_grid(grid, 6, 4);

    grid[0][3] = 98;
    grid[3][4] = 402;

    printf("\nModified Grid:\n");
    print_grid(grid, 6, 4);

    free_grid(grid, 4);

    return 0;
}
