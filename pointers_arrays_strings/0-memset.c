#include "main.h"
#include <stdio.h>

/**
**_memset - Return the memset function
*@s: String
*@b: Character to change
*@n: Size
*
*Return: Always 0
*/

char *_memset(char *s, char b, unsigned int n)
{

unsigned char i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
