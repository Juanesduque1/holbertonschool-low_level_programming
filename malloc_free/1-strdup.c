#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
**_strdup - Return a copy of a string
*@str: Original string
*
*Return: Copy of the string
*/

char *_strdup(char *str)
{

	int i = 0;
	int len = strlen(str) + 1;

	char *nstr = malloc(len);

	if (nstr == NULL || str == NULL)
	{
		printf("failed to allocate memory\n");
        return (0);
	}

	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}

	return (nstr);
}
