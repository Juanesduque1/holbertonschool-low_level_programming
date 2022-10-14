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
int i = 1;
int l;
int c;

for (l = 0; l < size; l++)
{
for (c = size; c >= 1; c--)
{
if (i >= c)
{
_putchar('#');
}
else 
{
_putchar(' ');
}
}
_putchar('\n');
i++;
}
}
