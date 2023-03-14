#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* free_grid - fuction that frees a 2d grid
*@grid: checks the grid
*@height: checks the height
*Return: nothing
*/
void free_grid(int **grid, int height)
{
int num;

for (num = 0; num < height; num++)
free(grid[num]);

free(grid);
}
