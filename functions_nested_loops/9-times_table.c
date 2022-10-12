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
int line;
int i = 0;
int column;

while (i <= 9)
{
for (column = 0; column <= 9; column++)
{
    for (line = 0; line <= 9; line++)
    {
        _putchar((line * column) + '0');
        _putchar(',');
        _putchar(' ');
        
    }
}
i++;
_putchar('\n');
}
}