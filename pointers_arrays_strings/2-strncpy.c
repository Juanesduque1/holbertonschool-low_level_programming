#include "main.h"
#include <stdio.h>

/**
**_strncpy - copies the string pointed to by src n times
*@dest: Destination
*@src: String to copy from
*@n: Variables that counts hoy many times it has to execute the process
*Return: Always 0
*/

char *_strncpy(char *dest, char *src, int n)
{
int len;
int c;
int i;

for (len = 0; src[len] != '\0'; len++)
{}
while (i < n)
{
    dest[i] = src[i];
    i++;
}
while (i < n)
{
    dest[i] = '\0';
    i++;
}
return (dest);
}
