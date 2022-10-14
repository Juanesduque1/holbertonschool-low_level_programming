#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
*print_numbers - Print numbers from 0 to 9
*Description: Program of task 3
*Return: 0123456789
*/

void print_numbers(void)
{
int i = 0;

while (i <= 9)
{
putchar(i + '0');
i++;
}
putchar('\n');
}
