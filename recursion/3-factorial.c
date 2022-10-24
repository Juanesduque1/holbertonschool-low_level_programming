#include "main.h"
#include <stdio.h>

/**
*factorial - Function that prints the factorial of an integer
*@n: Integer
*
*Return: Always 0
*/

int factorial(int n)
{

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
