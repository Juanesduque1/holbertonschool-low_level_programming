#include "main.h"
#include <stdio.h>

/**
**_strcat - Concatenate two strings
*@dest: Variable of the destination
*@src: Variable of the string
*
*Return: Always 0
*/

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
j++;
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
