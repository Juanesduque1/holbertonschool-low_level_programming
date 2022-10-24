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

	int i;
	
	if (*s = '\0')
	{
		return (0);
	}
	else 
	{
		i++;
		_strlen_recursion(s++);
	}

}
