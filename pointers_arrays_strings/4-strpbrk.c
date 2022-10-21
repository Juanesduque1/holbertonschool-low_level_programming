#include "main.h"
#include <stdio.h>

/**
**_strpbrk - Return the strpbrk function
*@s: String
*@accept: Substring
*
*Return: Always 0
*/

char *_strpbrk(char *s, char *accept)
{
int i = 0;
int j;

while (s[i])
{
j = 0;
while (accept[j])
{
if (s[i] == accept[j])
{
return (s + i);
}
j++;
}
i++;
}
return (0);
}
