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

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(ptr);

	if (separator != NULL)
	{
		va_start(ptr, n);

		for (i = 0; i < n; i++)
		{
			if (i < n - 1)
				printf("%d%s", va_arg(ptr, int), separator);
			if (i == n - 1)
				printf("%d", va_arg(ptr, int));
		}
		printf("\n");

		va_end(ptr);
	}
}
