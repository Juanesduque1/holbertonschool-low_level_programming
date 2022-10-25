#include "main.h"
#include <stdio.h>

/**
*_sqrt_recursion - Return square root of n with other parameter for the guess
*@n: Integer
*@guess: Integer
*
*Return: Always 0
*/

int square_root_wrapper(int n, int guess)
{

	if (guess * guess == n)
	{
		return (guess);
	}

	else if((guess < 0) || (guess > n))
	{
		return (-1);
	}

	else 
	{
		return square_root_wrapper(n, guess + 1);
	}
}

/**
*_sqrt_recursion - Return square root of n
*@n: Integer
*
*Return: Always 0
*/

int _sqrt_recursion(int n)
{
	return (square_root_wrapper(n, 1));
}
