#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
*print_times_table - Prints matrix size n
*@n: Parameter
*Description: Program of task 12
*Return: Result of the function
*/

void print_times_table(int n)
{
int l;
int c;
int i;

i = 0;

for (l = 0; l <= n; l++)
{
for (c = 0; c <= n; c++)
{
int r;
r = i *c;
if (r > 9 && r < 100)
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
else if (r >= 100)
{
_putchar(',');
_putchar(' ');
_putchar((r / 10) + '0');
_putchar((r % 100) + '0');
_putchar((r % 10) + '0');
}
}
i++;
_putchar('\n');
}
}
