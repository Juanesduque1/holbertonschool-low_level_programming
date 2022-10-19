#include "main.h"
#include <stdio.h>

/**
**_strncat - Concatenate two strings
*@dest: Variable of the destination
*@src: Variable of the string
*@n: Variable
*
*Return: Always 0
*/

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
n--;

while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
if (n >= j)
{
dest[i + j] = src[j];
}
j++;
}
dest[i + j] = '\0';
return (dest);
}
