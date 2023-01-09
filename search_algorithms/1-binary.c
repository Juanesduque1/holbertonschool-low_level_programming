#include "search_algos.h"

/**
* binary_search - Function to search a specific value
*@array: Array that contains values
*@size: Number of elements of the array
*@value: Value to search for
*/

int binary_search(int *array, size_t size, int value)
{

	size_t low = 0, high = size - 1, mid = 0, i = 0;

	if (!array)
		return (-1);

	while (low <= high)
	{
		mid = (high + low) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i != low)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");

		if (value == array[mid])
			return (mid);

		if (value > array[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
