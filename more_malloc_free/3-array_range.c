#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
**array_range - Creates an array of integers
*@min: Minimum value
*@max: Maximum value
*
*Return: Always 0
*/

int *array_range(int min, int max)
{
	int i, j = 0;
	int *array;

	if (min > max)
		return (NULL);

	array = malloc(max);

	if (array == NULL)
		return (NULL);

	for (i = min; i <= max; i++, j++)
		array[j] = i;

	return (array);
}
