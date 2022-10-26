#include "main.h"
#include <stdio.h>

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
		mul = sscanf(argv[1], "%d", &a) * sscanf(argv[2], "%d", &b);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
