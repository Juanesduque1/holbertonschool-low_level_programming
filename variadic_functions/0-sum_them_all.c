#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*sum_them_all - Adds all the parameters of the variadic function
*@n: Argument
*
*Return: Zero
*
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result = 0;

	va_list(ptr);

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		result += va_arg(ptr, int);

	va_end(ptr);

	return (result);
}
