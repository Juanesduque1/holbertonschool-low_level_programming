#include "main.h"

/**
*clear_bit - Sets the value of a bit to 0 at given index
**@n: Bit
*@index: Index
*
*Return: Always 0
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
