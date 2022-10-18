#include "main.h"
#include <stdio.h>

/**
*swap_int - Swap the value of two variables
*@a: Variable one
*@b: Variable two
*
*Return: Always 0
*/

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
