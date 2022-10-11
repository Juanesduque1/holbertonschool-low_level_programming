#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*
*Return: Zero
*
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int ld;
	ld = n % 10;

	if (ld < 5, ld =! 0)
	printf("Last digit of ", n "is ", ld "and is less than 6 and not 0");

	if (ld == 0)
	printf("Last digit of ", n "is ", ld "and is 0");

	if (ld > 5)
	printf("Last digit of ", n "is ", ld "and is greater than 5");

	return (0);
}
