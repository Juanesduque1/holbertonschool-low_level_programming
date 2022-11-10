#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_strings - Prints strings given as arguments in the variadic function
*@separator: Separator of strings for printing
*@n: Argument
*
*Return: Zero
*
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(ptr);
	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			if (i < n - 1)
			{
				if (va_arg(ptr, char *) != NULL)
					printf("%s%s", va_arg(ptr, char *), separator);
				else
					printf("(nil)");
			}
			if (i == n - 1)
			{
				if (va_arg(ptr, char *) != NULL)
					printf("%s", va_arg(ptr, char *));
				else
					printf("(nil)");
			}
		}
		if (separator == NULL)
		{
			if (va_arg(ptr, char *) != NULL)
				printf("%s", va_arg(ptr, char *));
			else
				printf("(nil)");
		}
	}
	printf("\n");
	va_end(ptr);
}
