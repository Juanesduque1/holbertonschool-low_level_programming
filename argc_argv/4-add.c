#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Function that prints the number of arguments
* @argc: Variable that counts the number of arguments
* @argv: Array of char pointers
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	for (i = 1; i <= argc; i++)
	{
		for (j = 0; argv[i][j] != 0; j++)
		{
		if ((argv[i][j] < '0') || argv[i][j] > '9')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + (atoi(argv[i][j]));
		}
		}
	}
	printf("%d\n", sum);
	return (0);
}
