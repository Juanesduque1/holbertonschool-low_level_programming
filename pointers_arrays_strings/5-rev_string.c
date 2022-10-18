#include "main.h"
#include <stdio.h>

/**
*_strlen - returns the lenght of a string
*@s: Variable
*
*Return: Always 0
*/

int _strlen(char *s)
{
int c;
c = 0;

while (s[c] != '\0')
{
c++;
}
return (c);
}

/**
*print_rev - returns a string reversed
*@s: Variable
*
*Return: Always 0
*/

 void rev_string(char *s)
 {

    int i;
    int len = _strlen(s);
    int k = len -1;
    char ch;

    for (i = 0; i < len / 2; i++)
    {
        ch = s[i];
        s[k] = s[i];
        s[k] = ch;
        k--;
    }
 }
 