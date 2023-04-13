#include "main.h"
#include <errno.h>

#define BUFFER_SIZE 1024
/**
 * print_error_and_exit - program that copies the content of a file to another file.
 * @exit_code:if you can not close a file descriptor.
 * @error_message: standard error.
 * @main: copies of the files.
 *
 * Return: 0 if sucess or exits on error.
 */
void print_error_and_exit(int exit_code, char* error_message)
{
	dprintf(STDERR_FILENO, "%s\n", error_message);
	exit(exit_code);
}

	int main(int argc, char *argv[])
	{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
	exit(97);
	}
				    
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
	exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
	exit(99);
	}
					    
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
	bytes_written = write(fd_to, buffer, bytes_read);

	if (bytes_written != bytes_read)
	{
	dprintf(STDERR_FILENO, "Error: Failed to write to the output file");
	exit(99);
	}
	}

	if (bytes_read == -1)
	{
	dprintf(STDERR_FILENO, "Error: Failed to read from the input file");
	exit(98);
	}

	if (close(fd_from) == -1)
	{

	dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_from);
	exit(100);
	}
	if (close(fd_to) == -1) 
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_to);
	exit(100);
	}
	return 0;
}
