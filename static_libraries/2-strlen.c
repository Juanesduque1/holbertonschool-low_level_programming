#include "main.h"
#include <stdio.h>

/**
*_strlen - returns the lenght of a string
*@s: Variable
*
*Return: Always 0
*/

int _strlen(char *s)
{
int c;
c = 0;

while (s[c] != '\0')
{
c++;
}
return (c);
}
