#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid created by alloc_grid
 * @grid: The 2D grid to be freed
 * @height: The height of the grid
 *
 * Return: None
 */
void free_grid(int **grid, int height)
{
    if (grid == NULL || height <= 0)
        return;

    /* Free each row of the grid */
    for (int i = 0; i < height; i++)
    {
        if (grid[i] != NULL)
        {
            free(grid[i]);
            grid[i] = NULL;
        }
    }

    /* Free the grid itself */
    free(grid);
}
