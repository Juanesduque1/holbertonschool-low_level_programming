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

while (n > 0)
{
n--;
_putchar(a[n]);
}
_putchar('\n');
}
