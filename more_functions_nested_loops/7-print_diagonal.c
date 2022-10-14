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
_putchar('\\');
_putchar('\n');
for (s = 0; s < c; s++)
{
_putchar(' ');
}
}
if (n <= 0)
{
_putchar('\n');
}
}
