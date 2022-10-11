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
int ch1;
int ch2;

for (ch1 = '0' ; ch1 <= '9' ; ch1++)
for (ch2 = '0' ; ch2 <= '9' ; ch2++)
{
{
if (ch1 != ch2)
putchar(ch1);
putchar(ch2);
putchar(',');
putchar(' ');
}
}

{
putchar('\n');

return (0);
}
}
