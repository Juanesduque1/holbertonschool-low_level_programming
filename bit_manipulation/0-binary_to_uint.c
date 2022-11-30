#include "main.h"

/**
*binary_to_uint - Converts a binary number to an unsigned int
*@b: Char
*
*Return: Conversion
*/

unsigned int binary_to_uint(const char *b)
{

	int binary_max_idx = 0, actual_result = 1;
	unsigned int converted_int = 0;

	if (!b)
		return (0);
	

	binary_max_idx = strlen(b) - 1;

	while (binary_max_idx >= 0)
	{
		if (b[binary_max_idx] != '0' && b[binary_max_idx] != '1')
			return (0);
		
		converted_int += actual_result * (b[binary_max_idx] - '0');
		actual_result *=2;
		binary_max_idx--;
	}
	return (converted_int);
}
