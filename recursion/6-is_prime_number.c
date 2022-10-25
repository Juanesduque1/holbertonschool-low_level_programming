#include "main.h"
#include <stdio.h>

/**
*check_prime - Return if a number is prime with 2 parameters
*@n: Number
*@i: Parameter
*
*Return: Always 0
*/

int check_prime(int n, int i)
{

	if (n == i)
	{
		return (0);
	}

	if (n % i == 0)
	{
		return (1);
	}

	else
	{
		return (check_prime(n, i + 1));
	}
}

/**
*is_prime_number - Return if a number is prime
*@n: Number
*
*Return: Always 0
*/

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
