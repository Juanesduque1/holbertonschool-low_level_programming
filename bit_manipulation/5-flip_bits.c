#include "main.h"

/**
*flip_bits - Flip bits from one number to another
*@n: First variable
*@m: Second variable
*
*Return: Always 0
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = 0, num = n ^ m;

	if (n == m)
		return (0);

	while (num > 0)
	{
		flip = flip + (num & 1);
		num >>= 1;
	}
	return (flip);
}
