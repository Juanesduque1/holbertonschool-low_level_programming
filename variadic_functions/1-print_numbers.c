#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_numbers - Prints the integers given as arguments in the variadic function
*@separator: Separator of integers for printing
*@n: Argument
*
*Return: Zero
*
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(ptr);
	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			if (i < n - 1)
				printf("%d%s", va_arg(ptr, int), separator);
			if (i == n - 1)
				printf("%d", va_arg(ptr, int));
		}
		if (separator == NULL)
		{
			printf("%d", va_arg(ptr, int));
		}
	}
	printf("\n");
	va_end(ptr);
}
