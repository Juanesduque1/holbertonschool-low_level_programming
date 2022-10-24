#include "main.h"
#include <stdio.h>

/**
*_strlen_recursion - Return length of a string
*@s: String
*
*Return: Always 0
*/

int _strlen_recursion(char *s)
{

	int i = 0;
	
	if (*s != '\0')
	{
		i++;
		_strlen_recursion(s++);
	}
	else 
	{
		return (0);
	}
	return (0);
}
