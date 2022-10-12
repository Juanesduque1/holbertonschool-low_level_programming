#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 *times_table - Print a matrix of 9 times
 *Description: Program of task 8
 *Return: last digit
 */

void times_table(void)
{
int l;
int c;
int i;

i = 0;

for (l = 0; l <= 9; l++)
{
for (c = 0; c <= 9; c++)
{
int r;
r = i *c;
if (r > 9)
{
_putchar(',');
_putchar(' ');
_putchar((r / 10) + '0');
_putchar((r % 10) + '0');
}
else if (c == 0)
{
_putchar(r + '0');
}
else if (r <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(r + '0');
}
}
i++;
_putchar('\n');
}}