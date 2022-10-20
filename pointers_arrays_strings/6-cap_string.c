#include "main.h"
#include <stdio.h>

/**
**cap_string - Returns the string in uppercase
*@c: Variable
*
*Return: Always 0
*/

char *cap_string(char *c)
{

int i, j;
char array[] = " \t\n,;.!?\"(){}";

i = 0;

if (c[0] >= 97 && c[0] <= 122)
{
c[0] -= 32;
}
while (c[i] != '\0')
{
if (c[i + 1] >= 97 && c[i] <= 122)
{
for (j = 0; array[j] != '\0'; j++)
{
if (array[j] == c[i])
{
c[i + 1] -= 32;
break;
}
}
}
i++;
}
return (c);
}
