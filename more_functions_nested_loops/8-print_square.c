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

for (l = 0; l <= size; l++)
{
for (c = 0; c <= size; c++)
{
_putchar('#');
}
if (size <= 0)
{
_putchar('\n');
}
}
}
