

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
for (h = 0; h <=23; h++);
{
for (i = 0; i <=59; i++);
_puttchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar('\n');
}
}
