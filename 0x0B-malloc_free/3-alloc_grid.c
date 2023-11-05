#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
    int **grid;
    int h, w;

    if (width <= 0 || height <= 0) {
        return NULL;
    }

    grid = (int **)malloc(sizeof(int *) * height);

    if (grid == NULL) {
        return NULL;
    }

    for (h = 0; h < height; h++) {
        grid[h] = (int *)malloc(sizeof(int) * width);
        if (grid[h] == NULL) {
            for (w = 0; w < h; w++) {
                free(grid[w]);
            }
            free(grid);
            return NULL;
        }
    }

    for (h = 0; h < height; h++) {
        for (w = 0; w < width; w++) {
            grid[h][w] = 0;
        }
    }

    return grid;
}

void print_grid(int **grid, int width, int height)
{
    int h, w;

    for (h = 0; h < height; h++) {
        for (w = 0; w < width; w++) {
            printf("%d ", grid[h][w]);
        }
        printf("\n");
    }
}

int main(void)
{
    int **grid;
    int h; /* Declare h here */

    grid = alloc_grid(6, 4);

    if (grid == NULL) {
        return (1);
    }

    print_grid(grid, 6, 4);
    printf("\n");

    for (h = 0; h < 4; h++) {
        free(grid[h]);
    }

    free(grid);

    return (0);
}
