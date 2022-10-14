#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 *times_table - Print a matrix of 9 times
 *Description: Program of task 9
 *Return: last digit
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
if (size <= 0)
_putchar('\n');
}
}
