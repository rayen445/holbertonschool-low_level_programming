#include "main.h"

#define BUF_SIZE 1024

/**
 * main - Copies the content of one file to another file
 * @ac: Number of arguments
 * @av: Array of arguments
 *
 * Return: 0 on success, otherwise exit status
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, rd, wr;
	char buf[BUF_SIZE];

	/* Check for correct number of arguments */
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	/* Open source file */
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	/* Open destination file */
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(fd_from);
		exit(99);
	}

	/* Copy content from source to destination */
	while ((rd = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		wr = write(fd_to, buf, rd);
		if (wr != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	/* Check for read error */
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		close(fd_from);
		close(fd_to);
		exit(98);
	}

	/* Close source and destination files */
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (close(fd_from) == -1) ? fd_from : fd_to);
		exit(100);
	}

	return (0);
}
