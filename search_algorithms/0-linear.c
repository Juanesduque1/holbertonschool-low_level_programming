#include "search_algos.h"

/**
*linear_search - Function to search a specific value
*@array: Array that contains values
*@size: Number of elements of the array
*@value: Value to search for
*Return: Index or -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array | !value)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
