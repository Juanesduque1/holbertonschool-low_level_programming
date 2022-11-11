#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

int type_char(const char *separator, char *s)
{
	printf("%s%s", separator, s);
	return (0);
}

int type_int(const char *separator, int n)
{
	printf("%s%i", separator, n);
	return (0);
}

int type_float(const char *separator, float n)
{
	printf("%s%f", separator, n);
	return (0);
}

int type_pointer(const char *separator, char *p)
{
	printf("%s%s", separator, p);
	return (0);
}

/**
*print_all - Prints anything
*@format: Type of data
*
*Return: Zero
*
*/

void print_all(const char * const format, ...)
{

	int i = 0;
	char *separator = ", ";
	va_list(formats);

	type_t types[] = {
		{"c", type_char},
		{"i", type_int},
		{"f", type_float},
		{"s", type_pointer}
	};

	while (types[i].t)
	{
		if (types[i].t == format)
			return (types[i].f());
		i++;
	}

}
