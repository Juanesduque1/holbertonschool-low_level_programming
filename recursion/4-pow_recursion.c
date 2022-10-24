#include "main.h"
#include <stdio.h>

/**
*_pow_recursion - Function that prints the pow of two integers
*@x: Integer
*@y: Integer 2
*
*Return: Always 0
*/

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}

	else
	{
		return (y * _pow_recursion(y, x - 1));
	}
}
