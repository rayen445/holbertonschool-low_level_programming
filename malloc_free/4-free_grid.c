#include <stdlib.h>

void free_grid(int **grid, int height)
{
    int i;
    /* Free each row first */
    for (i = 0; i < height; i++) {
        free(grid[i]);
    }
    /* Free the entire grid */
    free(grid);
}
