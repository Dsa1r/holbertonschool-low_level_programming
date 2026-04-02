#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
    int **grid;
    unsigned int i, j;

    if (width <= 0 || height <= 0)
        return NULL;

    grid = malloc(height * sizeof(int *));
    if (grid == NULL)
        return NULL;

    for (i = 0; i < (unsigned int)height; i++)
    {
        grid[i] = malloc(width * sizeof(int));
        if (grid[i] == NULL)
        {
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return NULL;
        }

        for (j = 0; j < (unsigned int)width; j++)
            grid[i][j] = 0;
    }

    return grid;
}
