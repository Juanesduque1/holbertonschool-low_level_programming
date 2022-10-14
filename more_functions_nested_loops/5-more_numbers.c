#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
*more_numbers - Print numbers
*Description: Program of task 5
*Return: Numbers
*/

void more_numbers(void)
{
int i;
int c;

for (c = 0; c < 10; c++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
