#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
**create_array - Return a array of a single character using Malloc
*@size: Size of the array
*@c: Character to return 'size' times in the array
*
*Return: Array
*/

char *_strdup(char *str)
{

	int i = 0;
	int len = strlen(str) + 1;

	char *nstr = malloc(len);

	if (nstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}

	return (nstr);
}
