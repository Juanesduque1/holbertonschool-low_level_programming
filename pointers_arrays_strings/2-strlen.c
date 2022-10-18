#include "main.h"
#include <stdio.h>

/**
*swap_int - Swap the value of two variables
*@a: Variable one
*@b: Variable two
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
