#include "main.h"
#include <stdio.h>

/**
**_strchr - Return the memcpy function
*@s: String
*@c: Character to find
*
*Return: Always 0
*/

char *_strchr(char *s, char c)
{
while(*s)
{
if(*s == c)
return (char *)s;
s++;
}
return (NULL);
}
