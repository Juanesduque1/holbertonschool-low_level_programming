#include "main.h"
#include <stdio.h>

/*
* main - Function that prints the name of the program
* @argc: Variable that tells the number of arguments
* @argv: Array of char pointers
* Return: Always 0
*/

int main(int argc, char *argv[]) 
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return(0);
}