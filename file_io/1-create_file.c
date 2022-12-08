#include "main.h"

/**
*create_file - Create a file
**@filename: Name of the file
*@text_content: Content to write inside the file
*
*Return: Always 0
*/

int create_file(const char *filename, char *text_content)
{
	int text_len, to_open, to_write = 0;

	if (text_content)
		text_len = strlen(text_content);

	if (!filename)
		return (-1);

	to_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (to_open == -1)
		return (-1);

	write(to_write, text_content, text_len);
	close(to_open);

	return (1);
}
