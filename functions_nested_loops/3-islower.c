#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
*_islower - Check if string is lowercase
*/

int _islower(int ch)
{
int ch;

if (islower(ch))
{
putchar('1');
}
else
{
putchar('0');
}
}
