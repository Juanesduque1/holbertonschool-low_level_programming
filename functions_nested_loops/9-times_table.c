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
int column;
    for (line = 0; line <= 9; line++)
    {
        for (column = 0; column <= 9; column++)
        {
            _putchar(line);
            _putchar(',');
            _putchar(' ');
            _putchar('\n');
        }
        
    }

    
}