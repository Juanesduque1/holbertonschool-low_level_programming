#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
*_isalpha - Check if string is lowercase
*@ch: variable
*Description: Program of task 4
*Return: 0 or 1
*/

int _isalpha(int ch)
{
if (ch >= 'a' && ch <= 'z' && ch >= 'A' && ch <= 'Z')
return (1);

else
return (0);
}
