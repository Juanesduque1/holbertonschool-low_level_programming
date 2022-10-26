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
	int count;

	count = argc - 1;

	if (argv != 0)
	{
	if (count == 0)
		return (0);

	if (count >= 1)
	{
		printf("%d\n", count);
	}
	}
	return (0);
}
