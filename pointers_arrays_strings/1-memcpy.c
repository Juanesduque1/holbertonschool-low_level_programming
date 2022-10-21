#include "main.h"
#include <stdio.h>

/**
**_memcpy - Return the memcpy function
*@dest: Pointer to copy the information
*@src: Pointer where the information is located
*@n: Size
*
*Return: Always 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
