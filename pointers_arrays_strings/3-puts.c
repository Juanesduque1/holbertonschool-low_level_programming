#include "main.h"
#include <stdio.h>

/**
*_puts - returns a string
*@str: Variable
*
*Return: Always 0
*/

void _puts(char *str)
{
int c;
c = 0;

while (str[c] != '\0')
{
_putchar(c);
}

}
