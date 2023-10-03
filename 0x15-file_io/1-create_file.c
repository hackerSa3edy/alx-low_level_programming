#include "main.h"

/**
 * create_file - creates a file.
 *
 * @filename: file name.
 * @text_content: text to be add into the file.
 *
 * Return: (1) on success, (-1) on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd_wr, fd, flags, perm, text_content_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (*text_content != '\0')
		{
			text_content_len++;
			text_content++;
		}

		text_content = text_content - text_content_len;
	}

	flags = O_CREAT | O_TRUNC | O_WRONLY;
	perm = S_IRUSR | S_IWUSR;

	fd = open(filename, flags, perm);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		fd_wr = write(fd, text_content, text_content_len);
		if (fd_wr < 0)
			return (-1);
	}

	close(fd);
	return (1);
}
