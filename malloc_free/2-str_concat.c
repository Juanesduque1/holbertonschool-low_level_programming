#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
**str_concat - Concatenate 2 strings into one array
*@s1: First string
*@s2: First string
*
*Return: Array result or NULL
*/

char *str_concat(char *s1, char *s2)
{

	int len1, len2, tlen, i, j;
	char *array;

	i = 0;
	j = 0;

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

	array = malloc(tlen) - 1;

	if (array == NULL)
	{
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		array[i] = s1[i];
		i++;
		j++;
	}

	i = 0;

	while (s2[i] != '\0')
	{
		array[j] = s2[i];
		i++;
		j++;
	}
	return (array);
}
