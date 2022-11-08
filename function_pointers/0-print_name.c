#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - Prints a name
 * @name: Name given
 * @f: Function to execute
 * 
 * Return: Always 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
