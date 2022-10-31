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

char *str_concat(char *s1, char *s2)
{

	int len1, len2, tlen, i;
	char *array;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}

	len1 = strlen(s1) + 1;
	len2 = strlen(s2) + 1;
	tlen = len1 + len2;

	array = malloc(tlen);

	while (s1[i] != '\0')
	{
		array[i] = s1[i];
		i++;
	}

	while (s2[i] != '\0')
	{
		array[i] = s2[i];
		i++;
	}
	return (array);
}
