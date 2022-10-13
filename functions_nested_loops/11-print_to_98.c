#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
*print_to_98 - Prints all natural numbers
*@n: Parameter
*Description: Program of task 11
*Return: Result of the addition
*/

void print_to_98(int n)
{
int i;

if (n == 98)
{
_putchar(n);
}
if (n < 98)
{
for ( i = n; i <= 98; i++)
{
printf("%i, ", n);
}
}
if (n > 98)
{
for ( i = n; i >= 98; i--)
{
printf("%i, ", n);
}
}
}
