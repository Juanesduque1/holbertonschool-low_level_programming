#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include  <fcntl.h>

/**
*main - Main function of the program
*Description: Copy the content of a file from one to another
*@argc: Count of parameters
*@argv: Arguments of the main function
*
*Return: Always 0
*/

int main(int argc, char **argv)
{
	ssize_t bytes_read = 1;
	int fd_from, fd_to, close_status, i;
	char *file_from = NULL, *file_to = NULL;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	file_from = argv[1];
	file_to = argv[1];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98); }
	fd_to = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99); }
	for (i = 0; i < 1024; i++)
		buff[i] = '\0';
	while (bytes_read)
	{
		bytes_read = read(fd_from, buff, 1024);
		write(fd_to, buff, bytes_read); }
	close_status = close(fd_from);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100); }
	close_status = close(fd_to);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100); }
	return (0);
}
