#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Functions, nested loops
 *
 * Return: Zero
 */
void print_alphabet(void);
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
putchar('\n');

return (0);
}
