#include "main.h"
#include <stdio.h>

/**
*_puts_recursion - Return a string reversed
*@s: String
*
*Return: Always 0
*/

void _print_rev_recursion(char *s)
{
int n;
int i;
char ch;

for (n = 0; s[n] != '\0'; n++)
{}

for (i = 0; i < n; i++)
{
	ch = s[n];
	s[n] = s[i];
	s[i] = ch;
	n--;
}
}
