#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
*times_table - Check if string is lowercase
*Description: Program of task 8
*Return: last digit
*/

void times_table(void)
{
int l;
int c;
int i;

for (l = 0; l <= 9; l++)
{
    for (c = 0; c <= 9; c++)
    {
        i = 0;
        _putchar((i= l * c) + '0');
        _putchar(',');
        _putchar(' ');
        _putchar(' ');
        
    i++;
    }
_putchar('\n');
}
}