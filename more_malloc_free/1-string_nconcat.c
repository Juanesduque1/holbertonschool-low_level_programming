#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
**string_nconcat - Concatenate two strings
*@s1: String 1
*@s2: String 2
@n: Number of bytes
*
*Return: Always 0
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i, j;
	unsigned int len1, len2;
	char *array;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n > len2)
		array = malloc(len1 + len2 + 1);
	else
		array = malloc(len1 + n + 1);

	if (array == 0)
		return (NULL);

	for (i = 0; i < len1; i++)
		array[i] = s1[i];

	for (j = 0; j < n && j < len2; i++, j++)
		array[i] = s2[j];

	array[i] = '\0';
	return (array);
}
