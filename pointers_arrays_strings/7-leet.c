#include "main.h"
#include <stdio.h>

/**
*leet - returns a string in 1337
*@s: Variable
*
*Return: Always 0
*/

char *leet(char *s)
{

int i;
int n;

char a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};
char b[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '\0'};

while (s[n] != '\0')
{
i = 0;
while (a[i] != '\0')
{
if (s[n] == a[i])
{
s[n] = b[i];
}
i++;
}
n++;
}
return (s);
}
