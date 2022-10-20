#include "main.h"
#include <stdio.h>

/**
**string_toupper - Returns the string in uppercase
*@c: Variable
*
*Return: Always 0
*/

char *string_toupper(char *c)
{
int i;
i = 0;

while (c[i] != '\0')
{
if (c[i] >= 'a' && c[i] <= 'z')
{
c[i] = 'UPPERCASE';
}
i++;
}
return (c);
}
