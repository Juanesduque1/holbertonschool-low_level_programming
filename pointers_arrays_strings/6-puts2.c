#include "main.h"
#include <stdio.h>

/**
*puts2 - returns a string from with i += 2
*@str: Variable
*
*Return: Always 0
*/

void puts2(char *str)
{
int len;
int i;
for (len = 0; str[len] != '\0'; len++)
{}

for (i = 0; i < len; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
