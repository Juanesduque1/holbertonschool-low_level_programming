#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
*print_last_digit - Check if string is lowercase
*@n: variable
*Description: Program of task 7
*Return: last digit
*/

int print_last_digit(int n)
{
int ld = n % 10;

if (n < 0)
{
ld = ld * -1;
_putchar(ld);
return (ld);
}
else
{   
_putchar(ld);
return (ld);
}
}
