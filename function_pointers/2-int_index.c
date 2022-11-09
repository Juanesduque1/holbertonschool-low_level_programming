#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - Finds the position of an integer
 * @array: Array
 * @size: Size
 * @cmp: Function to compare
 *
 * Return: Always 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}	
	}
	return (-1);
}
