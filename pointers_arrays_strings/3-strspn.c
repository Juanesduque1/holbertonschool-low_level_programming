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
unsigned int c;

c = 0;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
{
c++;
}
}
}
return (c);
}
