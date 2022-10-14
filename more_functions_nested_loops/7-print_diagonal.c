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

for (c = 1; c <= n; c++)
{
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
}
