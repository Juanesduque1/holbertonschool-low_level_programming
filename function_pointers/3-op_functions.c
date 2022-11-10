#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Adds two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Always 0
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substract two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Always 0
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Always 0
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Always 0
 */

int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Gets the module of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Always 0
 */

int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
