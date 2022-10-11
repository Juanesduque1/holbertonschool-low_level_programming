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
char ch = 'a';
while (i < 10)
{
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}
