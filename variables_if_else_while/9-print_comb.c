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

for (ch = '0' ; ch <= '9' ; ch++)
{
if (ch != '9')
putchar(ch);
putchar(',');
putchar(' ');
}
putchar('\n');

return (0);
}
