#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Pointer to a 2D array of integers or NULL on failure
 */
int **alloc_grid(int width, int height)
{
    if (width <= 0 || height <= 0)
        return (NULL);

    int **grid = (int **)malloc(sizeof(int *) * height);

    if (grid == NULL)
        return (NULL);

    for (int h = 0; h < height; h++)
    {
        grid[h] = (int *)malloc(sizeof(int) * width);
        if (grid[h] == NULL)
        {
            for (int i = 0; i < h; i++)
                free(grid[i]);
            free(grid);
            return (NULL);
        }

        for (int w = 0; w < width; w++)
            grid[h][w] = 0;
    }

    return (grid);
}
