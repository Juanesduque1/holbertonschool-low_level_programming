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
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
if (s[i] == c)
{
return (s + i);
}
return (0);
}
