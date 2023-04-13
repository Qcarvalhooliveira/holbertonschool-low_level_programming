#include "main.h"

#define MSG97 "Usage: cp file_from file_to\n"
#define MSG98 "Error: Can't read from file %s\n"
#define MSG99 "Error: Can't write to %s\n"
#define MSG100 "Error: Can't close fd %d\n"

/**
 * main - copies the content of a file to another file
 * @ac: number of arguments
 * @av: arguments
 * Return: 0 on success or exits on error
 */


int main(int ac, char *av[])
{
	int file_from, file_to;
	int len, c1, c2;
	char buffer[1024];
	mode_t perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
	dprintf(STDERR_FILENO, MSG97), exit(97);
	if (av[1] == NULL)
	dprintf(STDERR_FILENO, MSG98, av[1]), exit(98);
	if (av[2] == NULL)
	dprintf(STDERR_FILENO, MSG99, av[2]), exit(99);

	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	dprintf(STDERR_FILENO, MSG98, av[1]), exit(98);

	file_to = open(av[2], O_TRUNC | O_CREAT | O_WRONLY, perm);
	while ((len = read(file_from, buffer, 1024)) > 0)
	{

	if (file_to == -1 || (write(file_to, buffer, len) != len))
	dprintf(STDERR_FILENO, MSG99, av[2]), exit(99);
	}
	if (len == -1)
	dprintf(STDERR_FILENO, MSG98, av[1]), exit(98);
	c1 = close(file_from);
	if (c1 == -1)
	dprintf(STDERR_FILENO, MSG100, file_from), exit(100);
	c2 = close(file_to);

	if (c2 == -1)
	dprintf(STDERR_FILENO, MSG100, file_to), exit(100);
	return (0);
}
