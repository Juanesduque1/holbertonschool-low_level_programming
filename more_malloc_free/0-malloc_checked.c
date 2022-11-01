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

void *malloc_checked(unsigned int b)
{
	char *ar = malloc(b);

	if (ar == NULL)
	{
		printf('%i\n', 98);
		return (0);
	}
	return (ar);
}
