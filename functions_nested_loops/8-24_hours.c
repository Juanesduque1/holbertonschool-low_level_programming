

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
*jack_bauer - Check if string is lowercase
*@h: variable of hours
*@m: vairable of minutes
*Description: Program of task 8
*Return: last digit
*/

void jack_bauer(void)
{
int h;
int i;
for (h == 0; h <=23; h++);
{
for (i == 0; i <=59; i++);
_printchar((h / 10) + '0');
_printchar((h % 10) + '0');
_printchar(':');
_printchar((i / 10) + '0');
_printchar((i % 10) + '0');
_printchar('\n');
}
}
