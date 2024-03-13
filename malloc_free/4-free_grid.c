#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
        int i;

        /* Free each row first */
        for (i = 0; i < height; i++)
        {
                free(grid[i]);
        }

        /* Free the entire grid */
        free(grid);
}
