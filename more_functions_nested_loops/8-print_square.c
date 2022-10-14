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

for (l = 0; l <= size; l++)
{
for (c = 0; c <= size; c++)
{
_putchar('#');
}
_putchar('\n');
}
}
