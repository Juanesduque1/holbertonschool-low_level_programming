#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main function to execute the calculator
 * @argc: Counter of parameters in argv
 * @argv: Parameters
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*getop)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	getop = get_op_func(argv[2]);

	if (getop != NULL )
	{
		printf("%i\n", getop(num1, num2));
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
