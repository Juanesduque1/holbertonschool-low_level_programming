#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
**_calloc - Executes the malloc function
*@nmemb: Number of elements
*@size: Size 
*
*Return: Always 0
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int i, j;
	char *array;

	j = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(j);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		array[i] = 0;
	
	return (array);

}
