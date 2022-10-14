#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
*_isdigit - Check if variable is digit
*@c: variable
*Description: Program of task 1
*Return: 0 or 1
*/

int _isdigit(int c)
{
if (c >= 0 && c <= 9)
return (1);

else
return (0);
}
