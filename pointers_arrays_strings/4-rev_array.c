#include "main.h"
#include <stdio.h>

/**
**reverse_array - Reverses an array of integers
*@a: Array
*@n: Number of integers of the arr
*Return: Always 0
*/

void reverse_array(int *a, int n)
{
int c;
c = n -1;

while (c > 0)
{
c--;
_putchar(a[c]);
}
_putchar('\n');
}
