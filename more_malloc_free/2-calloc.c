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

	unsigned int i;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		array = malloc(size);
	}

	if (array == NULL)
		return (NULL);
	
	return (array);

}
