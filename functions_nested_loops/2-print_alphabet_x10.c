#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* print_alphabet - print alphabet in lowercase
*/

void print_alphabet_x10(void)
{
int  i = '1';
char ch = 'a';
while (i <= 10)
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
i++;
}
