#include "main.h"
#include <stdio.h>

/**
 * *_strstr - String that prints the function strstr
 *@haystack: First string
 *@needle: String to compare
 *Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *str = haystack;
char *str2 = needle;

while (*haystack && *str2 && *haystack == *str2)
{
haystack++;
str2++;
}
if (!*str2)
{
return (str);
}
haystack = str + 1;
}
return (0);
}
