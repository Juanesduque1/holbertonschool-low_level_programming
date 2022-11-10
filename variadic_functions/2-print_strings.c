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

		if (pointres == NULL)
			printf("(nil)");
		else
			printf("%s", pointres);

		if (i < n - 1 && separator != NULL)
			printf("%s%s", pointres, separator);
	i++;
	}

	printf("\n");
	va_end(ptr);
}
