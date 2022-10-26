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
		/*a = (int) (argv[1]);
		b = (int) (argv[2]);*/
		sscanf(argv[1], "%d", &a);
		sscanf(argv[2], "%d", &b);
		mul = a * b;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
