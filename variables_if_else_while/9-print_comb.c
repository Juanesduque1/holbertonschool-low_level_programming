#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*
*Return: Zero
*
*/

int main(void)
{
int ch;

for (ch = '0' ; ch <= '8' ; ch++)
{
putchar(ch);
putchar(',');
putchar(' ');
}
putchar('9''\n');

return (0);
}
