#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
*print_line - Print line n
*@n: Variable of how many times the program has to print '_'
*Description: Program of task 6
*Return: Line
*/

void print_line(int n)
{
int c;

for (c = 1; c <= n; c++)
{
_putchar('_');
}
_putchar('\n');
}
