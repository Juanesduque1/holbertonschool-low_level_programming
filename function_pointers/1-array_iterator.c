#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes a function given as a parameter
 * @array: Array
 * @size: Size
 * @action: Action to execute
 *
 * Return: Always 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
