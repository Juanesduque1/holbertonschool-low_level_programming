#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* print_alphabet - print alphabet in lowercase
*/

void print_alphabet(void)
{
char ch = 'a';

while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');

}
