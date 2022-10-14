#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
*_isupper - Check if string is uppercase
*@ch: variable
*Description: Program of task 0
*Return: 0 or 1
*/

int _islower(int ch)
{
if (ch >= 'A' && ch <= 'Z')
return (1);

else
return (0);
}
