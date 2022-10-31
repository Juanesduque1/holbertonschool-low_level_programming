#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
**create_array - Return a array of a single character using Malloc
*@size: Size of the array
*@c: Character to return 'size' times in the array
*
*Return: Array
*/

char *create_array(unsigned int size, char c)
{

	unsigned int i = 0;
	char *array;

	array = malloc(size);

	if (size == 0 || array == 0)
	{
		return (NULL);
	}

	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
