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

while(*dest != '\0')
{
dest++;
}
while(*src != '\0')
{
dest = src;
dest++;
src++;
}
*dest = '\0';
return (dest);
}