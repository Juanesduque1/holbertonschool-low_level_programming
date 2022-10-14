#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
*print_triangle - Print triangle n
*@size: Variable of how many times the program has to print '#'
*Description: Program of task 10
*Return: Triangle
*/

void print_triangle(int size)
{
int i;
int c;

for (i = 0; i < size; i++)
{
_putchar(' ');
}
for (c = size; c >= 0; c--)
{
_putchar('#');
_putchar('\n');
}
_putchar('\n');
}
