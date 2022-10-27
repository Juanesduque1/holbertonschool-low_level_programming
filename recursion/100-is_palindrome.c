#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*is_palindrome_check - Function to assist the is_palindrome function, wich returns 1 if a string is palindrome, 0 if it is not
*@s: String
*@l: Left character
*@r: Right character
*
*Return: Always 0
*/

int is_palindrome_check(char *s, int l, int r)
{
	if (l >= r)
	{
		return (1);
	}
	else if (s[l] != s[r])
	{
		return (0);
	}
	else
		return (is_palindrome_check(s, l + 1, r - 1));
}

/**
*is_palindrome - Return 1 if a string is palindrome, 0 if it is not
*@s: String
*
*Return: Always 0
*/

int is_palindrome(char *s)
{
	int len = strlen(s) - 1;

	return (is_palindrome_check(s, 0, len));
}
