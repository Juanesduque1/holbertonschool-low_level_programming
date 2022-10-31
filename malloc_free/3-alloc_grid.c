#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
**alloc_grid - Returns a 2d array of integers
*@width: Width
*@height: Height
*
*Return: Array result or NULL
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	char *array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = (int **)malloc(height*sizeof(int*)); 

	for (i = 0; i < height; i++) 
		array[i] = (int*)malloc(width*sizeof(int)); 

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
