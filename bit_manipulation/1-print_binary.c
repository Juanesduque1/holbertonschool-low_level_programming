#include "main.h"

/**
*print_binary - Print a binary number
*@b: Number to print
*
*Return: Always 0
*/

void print_binary(unsigned long int n)
{
	if (n && n >> 1)
		print_binary(n >> 1);
	putchar((n & 1) + '0');
}
