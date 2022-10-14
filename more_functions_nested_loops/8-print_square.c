#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 *print_square - Print a matrix of #
 *Description: Program of task 8
 *Return: Matrix
 */

void print_square(int size)
{
int l;
int c;

for (l = 1; l <= size; l++)
{
for (c = 1; c <= size; c++)
{
_putchar('#');
}
_putchar('\n');

if (size <= 0)
{
_putchar('\n');
}
}
}
