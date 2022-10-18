#include "main.h"
#include <stdio.h>

/**
*puts_half - returns a string reversed
*@str: Variable
*
*Return: Always 0
*/

void puts_half(char *str)
{
int len;
int i;
for (len = 0; str[len] != '\0'; len++)
{}
int lenaux;
lenaux = len / 2;
if (len % 2 != 0)
{
lenaux = (len - 1) / 2;
}
for (i = 0; i < lenaux; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
