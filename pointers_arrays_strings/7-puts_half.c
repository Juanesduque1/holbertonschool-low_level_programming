#include "main.h"
#include <stdio.h>

/**
*puts_half - returns the last half of a string
*@str: Variable
*
*Return: Always 0
*/

void puts_half(char *str)
{
int len;
int i;
int lenaux;

for (len = 0; str[len] != '\0'; len++)
{}
lenaux = len / 2;
if (len % 2 != 0)
{
lenaux = ((len - 1) / 2) + 1;
}
for (i = lenaux; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
