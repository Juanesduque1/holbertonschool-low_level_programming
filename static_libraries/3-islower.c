#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
*_islower - Check if string is lowercase
*@ch: variable
*Description: Program of task 3
*Return: 0 or 1
*/

int _islower(int ch)
{
if (ch >= 'a' && ch <= 'z')
return (1);

else
return (0);
}
