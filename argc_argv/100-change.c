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
	if (argc != 2)
		printf("Error\n");
		return (1);

	int i, j;
	int total = atoi(argv[1]);
	char coins[] = {25, 10, 5, 2, 1};

	if (total < 0)
		printf("0");
		return (0);

	for (i = 0; coins[i] != '\0'; i++)
	{
		if (coins[i] > total)
			continue;

		for (j = 0; coins[i] >= total; j++)
		{
			total = total - coins[i];
		}
	}
	printf("%d\n", j);
	return (0);
}
