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
int n;
int aux = 0;

for (n = 0; s[n] != '\0'; n++)
{}

for (i = 0; i < n; i++)
{
if (s[i] == c)
{
while (i < n)
{
s[aux] = s[i];
aux++;
i++;
}
}
else
{
return (NULL);
}
}
return (s);
}
