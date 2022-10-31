#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *buffer;

    buffer = create_array(5, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 5);
    free(buffer);
    return (0);
}

/**
**create_array - Return a array of a single character using Malloc
*@size: Size of the array
*@i: Character to return 'size' times in the array
*
*Return: Array
*/

char *create_array(unsigned int size, char c)
{

	unsigned int i = 0;
    char *array;
	array = malloc(size * sizeof(c));

	if (size == 0)
	{
		return (0);
	}

	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
