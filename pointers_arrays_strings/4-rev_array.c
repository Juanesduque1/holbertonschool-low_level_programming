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
int i;
int aux;
c = n - 1;

for (i = 0; i < c; i++)
{
aux = a[i];
a[i] = a[c];
a[c] = aux;
}
}