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

unsigned char *dst = s;
while (n > 0) {
*dst = (unsigned char) b;
dst++;
n--;
}
return s;

}