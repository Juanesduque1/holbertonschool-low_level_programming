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
	int total, i;
	int j = 0;
	char coins[] = {25, 10, 5, 2, 1};


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; coins[i] != '\0'; i++)
	{
		if (coins[i] > total)
		{
			continue;
		}

		while ( coins[i] <= total)
		{
			total = total - coins[i];
			j++;
		}
	}
	printf("%d\n", j);
	return (0);
}
