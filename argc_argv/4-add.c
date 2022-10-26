#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Function that prints the number of arguments
* @argc: Variable that counts the number of arguments
* @argv: Array of char pointers
* Return: Always 0
*/
	
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i <= argc; i++)
	{
		if (atoi(argv[i]) >= 0)
			sum = sum + (atoi(argv[i]));
		else
			printf("Error\n");
			return (1);
	}
	print("%d\n", sum);
	return (0);
}
