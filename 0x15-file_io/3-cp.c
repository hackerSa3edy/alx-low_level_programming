#include "main.h"

ssize_t cp(const char *file_from, const char *file_to);

/**
 * main - copies the content of a file to another file.
 *
 * @argc: number of arguments.
 * @argv: arguments values.
 *
 * Return: (1) always success, otherwise EXIT_CODE.
 */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp(argv[1], argv[2]);

	return (1);
}

/**
 * cp - copies the content of a file to another file.
 *
 * @file_from: arguments values.
 * @file_to: number of arguments.
 *
 * Return: (1) always success, otherwise EXIT_CODE.
 */
ssize_t cp(const char *file_from, const char *file_to)
{
	int f_from_fd, fread, fwrite, f_to_fd, perm, flags;
	char *buffer;

	if (file_from == NULL || file_to == NULL)
	{
		exit(-1);
	}

	flags = O_TRUNC | O_WRONLY | O_CREAT;
	perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	f_from_fd = open(file_from, O_RDONLY);
	buffer = malloc(BUFFER_SIZE);
	if (f_from_fd < 0 || buffer == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	f_to_fd = open(file_to, flags, perm);
	if (f_to_fd < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	fread = read(f_from_fd, buffer, BUFFER_SIZE);
	while (fread != 0)
	{
		fwrite = write(f_to_fd, buffer, fread);
		if (fwrite < 0)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}

		fread = read(f_from_fd, buffer, BUFFER_SIZE);
		if (fread < 0)
		{
			dprintf(2, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}

	}

	free(buffer);
	if (close(f_from_fd) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", f_from_fd);
		exit(100);
	}
	if (close(f_to_fd) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", f_to_fd);
		exit(100);
	}

	return (1);
}
