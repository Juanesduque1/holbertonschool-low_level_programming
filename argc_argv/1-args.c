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
	if (argv != 0)
	{
	if (argc >= 1)
	{
		printf("%d\n", argc);
	}
	}
	return (0);
}
