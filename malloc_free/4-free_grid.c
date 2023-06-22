#include "main.h"

/**
 * free_grid - function that frees a 2d grid made from previous
 * function
 * @grid: input
 * @height: input
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int x = 0;

	if (grid == NULL)
		return;
	while (x < height)
		free((int *)grid[x++]);

	return (grid);
}
