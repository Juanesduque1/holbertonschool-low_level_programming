#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
*print_diagonal - Print diagonal n
*@n: Variable of how many times the program has to print '\'
*Description: Program of task 7
*Return: Diagonal
*/

void print_diagonal(int n)
{
int c;
int s;

for (c = 1; c <= n; c++)
{
for (s = 0; s < c; s++)
{
if (c != 1)
{
_putchar(' ');
}
}
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
