#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 *	POSIX standard output.
 *
 * @filename: file name.
 * @letters: size of buffer to be read.
 *
 * Return: the actual number of letter it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fd_rd, fd_wr;
	char *buffer;

	buffer = malloc(letters);
	if (filename == NULL || buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	fd_rd = read(fd, buffer, letters);
	if (fd_rd < 0)
		return (0);

	fd_wr = write(STDOUT_FILENO, buffer, fd_rd);
	if (fd_wr < 0)
		return (0);

	close(fd);
	free(buffer);
	return (fd_rd);
}
