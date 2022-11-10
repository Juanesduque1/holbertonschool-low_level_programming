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
	char * pointres;

	va_list(ptr);
	va_start(ptr, n);

	while (i < n)
	{
		pointres = va_arg(ptr, char *);

		if (pointres != NULL)
			printf("%s", pointres);
		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	i++;
	}

	printf("\n");
	va_end(ptr);
}
