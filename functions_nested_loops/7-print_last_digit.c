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
int ld;

ld = n % 10;
if (n < 0)
{
ld = ld * -1;
/*ld = n % 10;*/
_putchar(ld + '0');
return (ld);
}
else
{
/*ld = n % 10;*/
_putchar(ld + '0');
return (ld);
}
}
