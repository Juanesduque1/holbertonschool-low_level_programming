#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
*print_sign - prints the sign of a number
*@n: variable
*Description: Program of task 5
*Return: 0, -1 or 1
*/

int print_sign(int n)
{
if (n < 0)
printf("-1");
return (-1);

if (n == 0)
printf("0");
return (0);

if (n > 0)
printf("+");
return (+1);
}
