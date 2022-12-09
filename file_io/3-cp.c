#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
*copy_fun - Function that copy from one file to another
*Description: Copy the content of a file from one to another
*@file_from: File to copy the information
*@file_to: File to paste the information
*
*Return: Always 0
*/

int copy_fun(char *file_from, char *file_to)
{
	ssize_t bytes_read = 1, bytes_written = 0;
	int fd_from, fd_to, close_status1, close_status2, i;
	char buff[1024];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		return (-1);

	fd_to = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		return (-2);
	}
	for (i = 0; i < 1024; i++)
		buff[i] = '\0';
	while (bytes_read > 0)
	{
		bytes_read = read(fd_from, buff, 1024);
		if (bytes_read == -1)
			return (-1);
		bytes_written = write(fd_to, buff, bytes_read);
		if (bytes_written == -1)
			return (-2);
	}
	close_status1 = close(fd_from);
	if (close_status1 == -1)
		return (-3);
	close_status2 = close(fd_to);
	if (close_status2 == -1)
		return (-4);
	return (0);
}

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
	int aux;
	char *file_from = NULL, *file_to = NULL;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	aux = copy_fun(file_from, file_to);
	if (aux == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (aux == -2)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	if (aux == -3)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file_from);
		exit(100);
	}
	if (aux == -4)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file_to);
		exit(100);
	}
	return (0);
}
