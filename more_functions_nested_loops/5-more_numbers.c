#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
*more_numbers - Print numbers
*Description: Program of task 5
*Return: Numbers
*/

void more_numbers(void)
{
int i = 0;
int c = 0;

for (c = 0; c <= 10; c++)
{
while (i <= 14)
{
if (i < 10)
{
putchar(i + '0');
i++;
}
else
putchar((i / 10) + '0');
putchar((i % 10) + '0');
}
putchar('\n');
}
}
