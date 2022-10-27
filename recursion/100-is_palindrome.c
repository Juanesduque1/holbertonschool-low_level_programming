#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*is_palindrome_check - Return 1 if a string is palindrome, 0 if it is not
*@s: String
*@i: Index
*
*Return: Always 0
*/

int is_palindrome_check(char *s, int i)
{

	int len = strlen(s) - (i -1);

	if (s[i] == s[len])
	{
		if (i + 1 == len || i == len)
		{
			return (1);
		}
		is_palindrome_check(s, i + 1);
	}
	else
	{
		return (0);
	}
	return (0);
}


/**
*check_prime - Return if a number is prime with 2 parameters
*@n: Number
*@i: Parameter
*
*Return: Always 0
*/

int is_palindrome(char *s)
{
	return (is_palindrome_check(s, 1));
}
