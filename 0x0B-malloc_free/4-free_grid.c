#include "holberton.h"

/**
 * free_grid - Function that frees a 2 dimensional grid previously
 *             created by your alloc_grid function
 * @grid: Pointer to Array Pointer.
 * @height: Size Array.
 */

void free_grid(int **grid, int height)
{
	int Solve_Height = height;

	while (height--)
		free(*grid++);
	free(grid - Solve_Height);
}
