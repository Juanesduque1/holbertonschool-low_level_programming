#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * get_op_func - Function that gets the operation to execute
 * @s: Symbol
 *
 * Return: Always 0
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (*s == *ops[i].op && strlen(s) == 1)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
