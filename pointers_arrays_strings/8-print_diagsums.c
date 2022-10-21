#include "main.h"
#include <stdio.h>

/**
*print_diagsums - Print the addition of diagonals
*@a: String
*@size: Size
*
*Return: Always 0
*/

void print_diagsums(int *a, int size)
{

int i;
int j;
int p1 = 0;
int p2 = 0;

for (i = 0; i < size; i++)
{
p1 = p1 + (a[i * (size + 1)]);
}

for ( j = 0; j < size; j++)
{
p2 = p2 + (a[(j * size) + (size - 1 - j)]);
}
printf("%d, %i\n", p1, p2);
}
