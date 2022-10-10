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
	
	if (n > 0)
	  printf(n, "%d is positive\n");

	if (n = 0)
	  printf(n, "%d is zero\n");

	if (n < 0)
	  printf(n, "%d is negative\n");  
	  
	return (0);
}
