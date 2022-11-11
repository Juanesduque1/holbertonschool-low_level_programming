#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_all - Prints anything
*@format: Type of data
*
*Return: Zero
*
*/

void print_all(const char * const format, ...)
{

	unsigned int count;
	char c;
	int i;
	float f;
	char *s;
	char separator = ", ";

	va_list (ptr);
	va_start (ptr, format);

	while (format != NULL && format[count] != '\0')
	{
		switch (format[count++])
		{
			case 'c':
					c = (char) va_arg(ptr, int);
					printf("%s", c);
					break;
			case 'i':
					i = va_arg(ptr, int);
					printf("%d", i);
					break;
			case 'f':
					f = va_arg(ptr, double);
					printf("%f", f);
					break;
			case 's':
					s = (char *) va_arg(ptr, int);
					printf("%s", s);
					break;
		}
		if (format[count] != NULL)
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
