#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
**free_grid - Frees the grid array
*@grid: 2D array of integers
*@height: Height
*
*Return: Array result or NULL
*/

void *free_grid(int **grid, int height)
{

	int i = 0;
	int width;
	int j;

	while (*grid[i] != '\0')
	{
		i++;
		width++;
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			free(*grid[i][j]);
		}
	}
	free(grid);
}
