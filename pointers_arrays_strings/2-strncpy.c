#include "main.h"
#include <stdio.h>

/**
**_strcpy - copies the string pointed to by src n times
*@dest: Destination
*@src: String to copy from
*
*Return: Always 0
*/

char *_strncpy(char *dest, char *src, int n)
{
int len;
int c;
int i;

for (len = 0; src[len] != '\0'; len++)
{}
for (i = 0; i < n; i++)
{
for (c = 0; c <= len; c++)
{
dest[c] = src[c];
}
}
return (dest);
}
