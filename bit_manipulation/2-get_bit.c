#include "main.h"

/**
*get_bit - Returns the vañue of a bit at given index
*@n: Bit
*@index: Index
*
*Return: Always 0
*/

int get_bit(unsigned long int n, unsigned int index)
{

	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
