#ifndef MAIN_H
#define MAIN_H

void print_grid(int **grid, int width, int height);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif /* MAIN_H */
