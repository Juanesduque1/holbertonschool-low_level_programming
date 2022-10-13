#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
*add - Adds two integers
*@x: First number
*@y: Second number
*Description: Program of task 10
*Return: Result of the addition
*/

int add(int x, int y)
{
int sum;

sum = x + y;

if (sum <= 9)
{
_putchar(sum +'0');
}

else if (sum > 9)
{
_putchar((sum / 10) + '0');
_putchar((sum % 10) + '0');
}

else if (sum >= 100)
{
_putchar((sum / 10) + '0');
_putchar((sum % 100) + '0');
_putchar((sum % 10) + '0');
}
}