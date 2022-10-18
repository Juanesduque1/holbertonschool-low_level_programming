#include "main.h"
#include <stdio.h>

/**
*print_array - returns an array of integers
*@str: Variable
*
*Return: Always 0
*/

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i < n - 1)
{
printf("%d, ", a[i]);
}
else
{
printf("%d", a[i]);
}
}
}
