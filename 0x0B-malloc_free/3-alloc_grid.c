#include <stdlib.h>

/**
 * alloc_grid - Allocate and initialize a 2D grid of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: If successful, a pointer to the allocated grid. NULL on failure.
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int h, w;

    // Return NULL for invalid dimensions
    if (width <= 0 || height <= 0)
        return (NULL);

    // Allocate memory for the array of pointers to rows
    grid = (int **)malloc(sizeof(int *) * height);

    // If malloc fails, return NULL
    if (grid == NULL)
        return (NULL);

    // Allocate memory for each row and initialize to 0
    for (h = 0; h < height; h++)
    {
        grid[h] = (int *)malloc(sizeof(int) * width);
        if (grid[h] == NULL)
        {
            // If malloc fails, free previously allocated memory and return NULL
            for (w = 0; w < h; w++)
                free(grid[w]);
            free(grid);
            return (NULL);
        }
        for (w = 0; w < width; w++)
            grid[h][w] = 0;
    }

    return (grid);
}
