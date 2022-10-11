#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
*print_alphabet_x10 - Print alphabet in lowercase
*/

void print_alphabet_x10(void)
{
int  i = '0';
char ch;
while (i < 10)
{
for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
_putchar('\n');
i++;
}
}
