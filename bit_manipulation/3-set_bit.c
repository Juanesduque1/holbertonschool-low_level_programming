#include "main.h"

/**
*set_bit - Sets the value of a bit to 1 at given index
**@n: Bit
*@index: Index
*
*Return: Always 0
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
