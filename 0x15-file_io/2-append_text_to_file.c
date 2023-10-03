#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: file name.
 * @text_content: text to be add into the file.
 *
 * Return: (1) on success, (-1) on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd_wr, fd, flags, text_content_len = 0;

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

	flags = O_WRONLY | O_APPEND;

	fd = open(filename, flags);
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
