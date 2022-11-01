#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
**malloc_checked - Allocates the memory with malloc
*@b: Size to allocate
*
*Return: Always 0
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{

	int i;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		array = malloc(size);
	}

	if (array == NULL)
		return (NULL);

}
