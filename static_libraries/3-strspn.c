#include "main.h"
#include <stdio.h>

/**
**_strspn - Return the quantity of characters contained in a string
*@s: String
*@accept: Substring
*
*Return: Always 0
*/

unsigned int _strspn(char *s, char *accept)
{

unsigned int i;
unsigned int j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
{
break;
}
}
if (accept[j] == '\0')
{
break;
}
}
return (i);
}
