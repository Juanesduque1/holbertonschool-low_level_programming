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

	va_list(ptr);
	unsigned int count = 0;
	char c;
	int i;
	float f;
	char *s;

	va_start(ptr, format);

	while (format != NULL && format[count] != '\0')
	{
		switch (format[count++])
		{
			case 'c':
					c = (char) va_arg(ptr, int);
					printf("%c", c);
					break;
			case 'i':
					i = va_arg(ptr, int);
					printf("%d", i);
					break;
			case 'f':
					f = (float) va_arg(ptr, double);
					printf("%f", f);
					break;
			case 's':
					s = va_arg(ptr, char *);
					if (s == NULL)
						s = ("(nil)");
					printf("%s", s);
					break;
			default:
					continue;
		}
		if (format[count] != '\0')
			printf(", ");
	}
	va_end(ptr);
	printf("\n");
}
