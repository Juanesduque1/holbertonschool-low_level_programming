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
char ch;

for (ch = 'z' ; ch >= 'a' ; ch--)
{
putchar(ch);
}
putchar('\n');

return (0);
}
