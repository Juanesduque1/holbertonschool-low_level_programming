#include <stdio.h>
#include "main.h"

/**
* main - Function that prints the number of arguments
* @argc: Variable that counts the number of arguments
* @argv: Array of char pointers
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	int mul;
	int a = 0;
	int b = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
