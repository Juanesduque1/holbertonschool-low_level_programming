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

  int i;
  unsigned char *p = s;
  i = 0;
  while(n > 0)
    {
      *p = s;
      p++;
      n--;
    }
  return(s);

}