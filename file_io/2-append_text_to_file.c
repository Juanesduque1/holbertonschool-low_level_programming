#include "main.h"

/**
*append_text_to_file - Append text into a file
**@filename: Name of the file
*@text_content: Content to write at the end of the file
*
*Return: Always 0
*/

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fd;

	if (!filename)
		return (-1);

	fd = fopen(filename, "a");
	if (!fd)
		return (-1);

	fputs(text_content, fd);
	fclose(fd);
	return (1);
}
