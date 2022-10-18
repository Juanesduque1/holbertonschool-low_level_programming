#include "main.h"
#include <stdio.h>

/**
*print_rev - returns a string reversed
*@s: Variable
*
*Return: Always 0
*/

void print_rev(char *s)
{
int c;
c = 0;

while (s[c] != '\0')
{
c++;
}
while (c > 0)
{
_putchar(s[c]);
c--;
}
_putchar('\n');
}
