#include "main.h"
#include <stdio.h>

/**
**_strcpy - copies the string pointed to by src
*@dest: Destination
*@src: String to copy from
*
*Return: Always 0
*/

char *_strcpy(char *dest, char *src)
{
int len;
int c;

for (len = 0; src[len] != '\0'; len++)
{}

for (c = 0; c <= len; c++)
{
dest[c] = src[c];
}
return (dest);
}
