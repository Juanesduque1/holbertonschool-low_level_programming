#include "main.h"

/**
*read_textfile - Reads a text file and prints it to POSIX STOUT
**@filename: Name of the file
*@letters: Number of letters
*
*Return: Conversion
*/


ssize_t read_textfile(const char *filename, size_t letters)
{
	int toopen, toread, towrite;
	char *c;

	if (!filename)
		return (0);

	c = malloc(letters);

	if (!c)
		return (0);

	toopen = open(filename, O_RDWR);

	if (!toopen)
		return (0);

	toread = read(toopen, c, letters);

	if (!toread)
		return (0);

	towrite = write(1, c, toread);

	if (towrite == -1)
		return (0);

	close(toopen);
	free(c);
	return (toread);
}
