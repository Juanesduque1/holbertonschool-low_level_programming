#include "main.h"
#include <stdio.h>

/**
**_strcmp - Conpares 2 strings
*@s1: Variable 1
*@s2: Variable 2
*Return: Always 0
*/

int _strcmp(char *s1, char *s2)
{
while( ( *s1 != '\0' && *s2 != '\0' ) && *s1 == *s2 )
{
s1++;
s2++;
}

if(*s1 == *s2)
{
return 0;
}

else
{
return *s1 - *s2;
}
}

