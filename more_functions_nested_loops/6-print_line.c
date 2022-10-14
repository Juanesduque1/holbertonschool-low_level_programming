#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
*print_line - Print line n
*Description: Program of task 6
*Return: Line
*/

void print_line(int n)
{
int c;

for (c = 0; c <= n; c++)
{
_putchar('_');
}
_putchar('\n');
}
